#include "ZLangDefReader.h"
#include "ZDBHelper.h"


LangDefinitionReader::LangDefinitionReader()
{
	//
}

LangDefinitionReader::~LangDefinitionReader()
{
	//
}

void LangDefinitionReader::ReadDef(std::string nameFile)
{
	LangData* data=new LangData();
	
	char* listLang="ZLangDef.dat";
	DBHelper::Instance().Open(listLang);
	DBHelper::Instance().Exec("SELECT * FROM ZwordSetting");

    std::vector<DataResult*>res;
    std::vector<DataResult*>::iterator it;
    DBHelper::Instance().GetResultVector(res);
	
	std::string s;
	for(it=res.begin();it!=res.end();it++)
	{
		data=new LangData();

		(*it)->GetDataByFieldName("ZTittle",s);
		data->Tittle=s;
		(*it)->GetDataByFieldName("ZFrom",s);
		data->From=s;
		(*it)->GetDataByFieldName("ZTo",s);
		data->To=s;
		(*it)->GetDataByFieldName("ZFile",s);
		data->DB=s;
		(*it)->GetDataByFieldName("Nomor",s);
		data->LangID=s;
		
		mVecLang.push_back(data);
	}
	DBHelper::Instance().Close();
}

LangData* LangDefinitionReader::GetLangByName(std::string &langName)
{
	std::vector<LangData*>::iterator it;
	for(it=mVecLang.begin();it!=mVecLang.end();it++)
	{
		if(!(*it)->Tittle.compare(langName))
		{
			break;
		}
	}
	return static_cast<LangData*>(*it);
}