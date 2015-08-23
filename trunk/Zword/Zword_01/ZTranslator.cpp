#include "ZTranslator.h"
#include <stdio.h>
#include <fstream>
#include <iostream>


Translator::Translator()
{
	//read all language definition
	mLanguanges.ReadDef();
}

Translator::~Translator()
{
	//destructor
}

std::string Translator::Translate(std::string &word)
{
	std::string q=mQuery1;
	q+=word.substr(0,1);
	q+=" where ";
	q+=mFrom;
	q+="='";
	q+=word;
	q+="'";
    DBHelper::Instance().Exec(q.c_str());

    std::vector<DataResult*>res;
    std::vector<DataResult*>::iterator it;
    DBHelper::Instance().GetResultVector(res);
	
	std::string s;
	if(!res.empty())
	{
		it=res.begin();//get first result
		(*it)->GetDataByFieldName(mTo,s);
	}
	else
	{
		s="word not found";
	}

#if _DEBUG
	std::cout<<q<<std::endl;
#endif
	return s;
}

void Translator::TranslateSimilar(std::string &word,QStandardItemModel& itemModel)
{
	std::string q2=mQuery2;
	q2+=word.substr(0,1);
	q2+=" where ";
	q2+=mFrom;
	q2+=" like '";
	q2+=word.substr(0,3);

	q2+="%";
	q2+="'";
	
    DBHelper::Instance().Exec(q2.c_str());

    std::vector<DataResult*>res2;
    std::vector<DataResult*>::iterator it2;
    DBHelper::Instance().GetResultVector(res2);
	int i=0;
    for(it2=res2.begin();it2!=res2.end();it2++)
    {
       std::string s;
       (*it2)->GetDataByFieldName(mFrom,s);
	   itemModel.appendRow(new QStandardItem(QString::fromStdString(s)));//who is deleted it later??? . i don't know yet
	   i++;
	   if(i>9)
		   break;
    }
#if _DEBUG
	std::cout<<q2<<std::endl;
#endif
}

void Translator::setModeLang(std::string& modeLang)
{
		mModeLang=modeLang;
	    DBHelper::Instance().Close();
		LangData* lang=mLanguanges.GetLangByName(modeLang);
		mQuery1="select ";
		mQuery1+=lang->To;
		mQuery1+=" from ";

		mQuery2="select ";
		mQuery2+=lang->From;
		mQuery2+=" from ";

    	mFrom=lang->From;
		mTo=lang->To;
#if _DEBUG
		std::cout<<mQuery2<<std::endl;
		std::cout<<mQuery1<<std::endl;
#endif
		if(!DBHelper::Instance().Open(lang->DB.c_str()))
		{
			std::cout<<"error: database couldn't opened"<<std::endl;
			exit(1);
		}
}

void Translator::AddNewWord(std::string& sFrom,std::string& sTo)
{
	if(sFrom=="" || sTo=="")
	{
#if _DEBUG
	std::cout<<"Add new word failed, check your word format "<<std::endl;
#endif
		return;
	}
	
	std::string normstr=NormalizeString(sFrom);

	if(CheckWordExist(normstr))
	{
		DeleteWord(normstr);//delete the old one
	}
	std::string tempQuery="insert into ";
	tempQuery+=normstr.substr(0,1);
	tempQuery+="(";
	tempQuery+=mFrom;
	tempQuery+=",";
	tempQuery+=mTo;
	tempQuery+=") values('";
	tempQuery+=normstr;
	tempQuery+="','";
	tempQuery+=sTo;
	tempQuery+="')";
#if _DEBUG
	std::cout<<"add new word: "<<tempQuery<<std::endl;
#endif
	DBHelper::Instance().Exec(tempQuery.c_str());
}

void Translator::AddNewWordFromFile(std::string& nameFile)
{
	std::string s1,s2;
	char ch;
	std::ifstream f(nameFile.c_str(),std::ios::in|std::ios::binary);
	s1="";
	s2="";
	
	while(f.get(ch))
	{
		if(ch=='=')
		{
			s2=s1;
			s1="";
		}
		else if(ch==CARRIAGE_RETURN)//new line
		{
			AddNewWord(s2,s1);
			s1="";
		}
		else 
		{
			s1+=ch;
		}
	}
	AddNewWord(s2,s1);
}

void Translator::AddNewWordFromEdit(std::string& str)
{
	std::string s1,s2;
	char ch;
	s1="";
	s2="";
	for(int i=0;i<str.size();i++)
	{
		ch=str.at(i);
		if(ch=='=')
		{
			s2=s1;
			s1="";
		}
		else if(ch==LINEFEED)//new line
		{
			AddNewWord(s2,s1);
			s1="";
		}
		else 
		{
			s1+=ch;
		}
	}
	AddNewWord(s2,s1);
}

bool Translator::isAlphabet(char ch)
	{
	bool result=false;
	if((65<=ch && 90>=ch) |(97<=ch && 122>=ch))
		{
		result=true;
		}
	return result;
	}
//word must clean
std::string Translator::NormalizeString(std::string& str)
{
	string buf1;
	buf1="";
	for(int i=0;i<str.size();i++)
		{
			char ch=str.at(i);
			if(ch=='\n')
				ch=32;
			if(buf1=="")
				{
				if(!isAlphabet(ch))
					continue;
				}
			if(ch==32)
				{
				if(buf1!="")
					{
					if(*(buf1.end()-1)!=32)
						buf1+=32;
					}
				}
			else
				buf1+=ch;
		}
	return buf1;
}

int Translator::AddNewLanguanges(LangData& lang)
{
	DBHelper::Instance().Open(lang.DB.c_str());
	char it;
	for(it='a';it!='z'+1;it++)
	{
		std::string tempQuery="create table ";
		tempQuery+=it;
		tempQuery+="(";
		tempQuery+=lang.From;
		tempQuery+=" text,";
		tempQuery+=lang.To;
		tempQuery+=" text)";
		DBHelper::Instance().Exec(tempQuery.c_str());
	}

	char* listLang="ZLangDef.dat";
	std::string query="INSERT INTO ZwordSetting(Nomor,ZTittle,ZFrom,ZTo,ZFile) VALUES('";
	query+=lang.LangID+"','";
	query+=lang.Tittle+"','";
	query+=lang.From+"','";
	query+=lang.To+"','";
	query+=lang.DB+"')";
	//std::cout<<"query :"<<query<<std::endl;
	DBHelper::Instance().Open(listLang);
	if(!DBHelper::Instance().Exec(query.c_str()))
	{
		return 1;
	}
	DBHelper::Instance().Close();

	setModeLang(mModeLang);

	return 0;//sukses
}

bool Translator::CheckWordExist(std::string& word)
{
	bool result=true;
	std::string q=mQuery2;
	q+=word.substr(0,1);
	q+=" where ";
	q+=mFrom;
	q+="='";
	q+=word;
	q+="'";
    DBHelper::Instance().Exec(q.c_str());

    std::vector<DataResult*>res;
    std::vector<DataResult*>::iterator it;
    DBHelper::Instance().GetResultVector(res);
	std::string s;
	if(res.empty())
	{
		result=false;
	}
	return result;
}

void Translator::DeleteWord(std::string& word)
{
	//delete from a where eng='abolish';
	std::string q="delete from ";
	q+=word.substr(0,1);
	q+=" where ";
	q+=mFrom;
	q+="='";
	q+=word;
	q+="'";
    DBHelper::Instance().Exec(q.c_str());
#if _DEBUG
	std::cout<<"Deleted word: "<<word<<std::endl;
#endif
}

void Translator::DeleteDictionary(std::string& str)
{
	char* listLang="ZLangDef.dat";
	std::string query="DELETE FROM ZwordSetting WHERE ZTittle='";
	query+=str+"'";
	DBHelper::Instance().Open(listLang);
	if(!DBHelper::Instance().Exec(query.c_str()))
	{
#if _DEBUG
	std::cout<<"DeleteDictionary error: "<<std::endl;
#endif
	}
	DBHelper::Instance().Close();
	setModeLang(mModeLang);
}