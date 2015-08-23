#include "zword_01.h"
#include "ZDBHelper.h"
#include <qtCore/QCoreApplication>
#include <QClipboard>
#include <QSettings>


#include <time.h>


Zword_01::Zword_01(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	mMonitorClipboard=true;
	//setup main ui
	ui.setupUi(this);
	this->setFixedSize(this->width(),this->height());
	//setup frame Add new word
	mFrameAdd=new QFrame();
	uiAddNew.setupUi(mFrameAdd);
	mFrameAdd->setVisible(false);
	mFrameAdd->setAutoFillBackground(true);
	mFrameAdd->setParent(this);
	mFrameAdd->move(0,0);
	mFrameAdd->resize(this->width(),this->height());
	//setup frame list languanges
	mFrameListLang=new QFrame();
	uiListLang.setupUi(mFrameListLang);
	mFrameListLang->setVisible(false);
	mFrameListLang->setAutoFillBackground(true);
	mFrameListLang->setParent(this);
	mFrameListLang->move(0,0);
	mFrameListLang->resize(this->width(),this->height());
	//setup frame new languanges
	mFrameNewLang=new QFrame();
	uiNewLang.setupUi(mFrameNewLang);
	mFrameNewLang->setVisible(false);
	mFrameNewLang->setAutoFillBackground(true);
	mFrameNewLang->setParent(this);
	mFrameNewLang->move(0,0);
	mFrameNewLang->resize(this->width(),this->height());
	//setup frame setting application
	mFrameSetting= new QFrame();
	uiSetting.setupUi(mFrameSetting);
	mFrameSetting->setVisible(false);
	mFrameSetting->setAutoFillBackground(true);
	mFrameSetting->setParent(this);
	mFrameSetting->move(0,0);
	mFrameSetting->resize(this->width(),this->height());
	//main ui
	connect(ui.action, SIGNAL(triggered()), this, SLOT(Translate()));
	connect(ui.listView, SIGNAL(clicked(QModelIndex)), this, SLOT(Translate(QModelIndex)));
	connect(ui.pushButtonAddNewWord, SIGNAL(clicked()), this, SLOT(OnAddNewWord()));
	connect(ui.pushButtonViewLang, SIGNAL(clicked()), this, SLOT(OnListLang()));
	connect(ui.pushButtonNewLang, SIGNAL(clicked()), this, SLOT(OnShowFrameAddLang()));
	connect(ui.pushButtonSetting, SIGNAL(clicked()), this, SLOT(OnAppSetting()));
	//connect(this, SIGNAL(closeEvent(QCloseEvent*)), this, SLOT(OnAppClose(QCloseEvent*)));
	//list languanges ui
	connect(uiListLang.LangList, SIGNAL(clicked(QModelIndex)), this, SLOT(ChangeLanguage(QModelIndex)));
	connect(uiListLang.pushButtonClose, SIGNAL(clicked()), this, SLOT(OnListLangClose()));
	//add new word ui
	connect(uiAddNew.pbExecute1, SIGNAL(clicked()), this, SLOT(OnAddNewWordExecute1()));
	connect(uiAddNew.pbExecute2, SIGNAL(clicked()), this, SLOT(OnAddNewWordExecute2()));
	connect(uiAddNew.pushButtonClose, SIGNAL(clicked()), this, SLOT(OnAddNewWordClose()));
	//add new languanges ui 
	connect(uiNewLang.pushButton, SIGNAL(clicked()), this, SLOT(OnCreateNewLang()));
	connect(uiNewLang.pushButtonClose, SIGNAL(clicked()), this, SLOT(OnAddNewLangClose()));
	connect(uiNewLang.pushButtonDel, SIGNAL(clicked()), this, SLOT(OnDictDel()));
	//setting ui
	connect(uiSetting.pushButtonClose, SIGNAL(clicked()), this, SLOT(OnSettingClose()));
	connect(uiSetting.ListViewStyle, SIGNAL(clicked(QModelIndex)), this, SLOT(OnChangeStyle(QModelIndex)));
	connect(uiSetting.CBAlwaysOnTop, SIGNAL(stateChanged ( int ) ), this, SLOT(OnCBAlwaysOnTop(int)));
	connect(uiSetting.CBMonitorClipBoard, SIGNAL(stateChanged ( int ) ), this, SLOT(OnCBMonitorClipBoard(int)));
	connect(uiSetting.SliderTransparancy, SIGNAL(valueChanged (int) ), this, SLOT(OnTransparancyChanged(int)));

	//clipboard monitor
	connect(QApplication::clipboard(), SIGNAL(dataChanged() ), this, SLOT(OnClipBoardChanged()));

	//stylesheet selector
	mStyle=new StyleSelector(this);

	mDoc=new QTextDocument();
	ui.TextResult->setDocument(mDoc);

	mDocAddNewWord=new QTextDocument();
	uiAddNew.TextEditNewWords->setDocument(mDocAddNewWord);

	mListModel = new QStandardItemModel();
	mListLangModel = new QStandardItemModel();
	mListStyleModel= new QStandardItemModel();


    ui.listView->setModel(mListModel);
	uiListLang.LangList->setModel(mListLangModel);
	uiSetting.ListViewStyle->setModel(mListStyleModel);

	mTranslator=new Translator();
	
	std::vector<LangData*>vecAllLang;
	std::vector<LangData*>::iterator it;
	mTranslator->GetAllLanguanges()->GetAllDataLang(vecAllLang);

	mStyle->LoadStyle(*mListStyleModel);
	
	for(it=vecAllLang.begin();it!=vecAllLang.end();it++)
	{
		mListLangModel->appendRow(new QStandardItem(QString::fromStdString((*it)->Tittle)));
	}	
	//word highlighter
	mWordHL=new WordHL(mDoc);

	clock_t t1,t2;
	t1=clock();
	ReadAppConfig();
    t2=clock()-t1;
	std::cout<<"TIME: "<<t2<<std::endl;

}

void Zword_01::Translate()
{
	mListModel->clear();
	std::string input=ui.TextInput->text().toStdString();//>toPlainText().toUtf8().data();
	if(input.empty())
		return;  //don't procceed
	//translate
	std::string s=mTranslator->Translate(input);
	mDoc->setPlainText(QString::fromStdString(s));
    //get similar word
    mTranslator->TranslateSimilar(input,*mListModel);	 
}

void Zword_01::Translate(QModelIndex index)
{
	//mListModel->itemFromIndex(index)->text();
	//std::cout<<"i'm excuted "<<mListModel->itemFromIndex(index)->text().toStdString()<<std::endl;
	ui.TextInput->setText(mListModel->itemFromIndex(index)->text());
	Translate();
}

void Zword_01::OnAddNewWord()
{
	mFrameAdd->show();
}

void Zword_01::OnListLang()
{
	mFrameListLang->show();
}

Zword_01::~Zword_01()
{
     DBHelper::Instance().Close();
}

void Zword_01::ChangeLanguage(QModelIndex index)
{
	mTranslator->setModeLang(mListLangModel->itemFromIndex(index)->text().toStdString());
	ui.pushButton->setText(mListLangModel->itemFromIndex(index)->text());
	uiAddNew.pushButtonTittle->setText(mListLangModel->itemFromIndex(index)->text());
	mFrameListLang->close();
}

void Zword_01::OnAddNewWordExecute1()
{
	mTranslator->AddNewWordFromEdit(mDocAddNewWord->toPlainText().toStdString());
	uiAddNew.TextEditNewWords->clear();
}

void Zword_01::OnAddNewWordExecute2()
{
	
	mTranslator->AddNewWordFromFile(uiAddNew.LineEditFileName->text().toStdString());
}

void Zword_01::OnShowFrameAddLang()
{
	mFrameNewLang->show();
}

void Zword_01::OnCreateNewLang()
{
	LangData lang;
	lang.Tittle=uiNewLang.lineEdit->text().toStdString();
	lang.DB=uiNewLang.lineEdit_2->text().toStdString();
	lang.From=uiNewLang.lineEdit_3->text().toStdString();
	lang.To=uiNewLang.lineEdit_4->text().toStdString();
	lang.LangID=uiNewLang.lineEdit_5->text().toStdString();
	if(mTranslator->AddNewLanguanges(lang)!=0)
	{
		uiNewLang.label_7->setText("error OnCreateNewLang");
#if _DEBUG
		std::cout<<"error OnCreateNewLang:query error"<<std::endl;
#endif
		return;
	}

	mFrameNewLang->close();
}

void Zword_01::OnAddNewWordClose()
{
	mFrameAdd->close();
}

void Zword_01::OnAddNewLangClose()
{
	mFrameNewLang->close();
}

void Zword_01::OnListLangClose()
{
	mFrameListLang->close();
}

void Zword_01::OnAppSetting()
{
	mFrameSetting->show();
}

void Zword_01::OnSettingClose()
{
	mFrameSetting->close();
}

void Zword_01::OnChangeStyle(QModelIndex index)
{
	//ui.TextInput->setText(mListModel->itemFromIndex(index)->text());
	mStyle->SetStyle(mListStyleModel->itemFromIndex(index)->text());
}

void  Zword_01::OnCBAlwaysOnTop(int state)
{
	if(0==state)
	{
		setWindowFlags(Qt::WindowTitleHint);
	}else
	{
		setWindowFlags(Qt::WindowStaysOnTopHint);
	}
	QPoint pos = this->pos();
	if (pos.x() < 0)
		pos.setX(0);
	if (pos.y() < 0)
		pos.setY(0);
	this->move(pos);
	this->show();
}

void  Zword_01::OnCBMonitorClipBoard(int state)
{
	if(0==state)
	{
		mMonitorClipboard=false;
	}else
	{
		mMonitorClipboard=true;
	}
}

void Zword_01::OnClipBoardChanged()
{
	if(mMonitorClipboard)
	{
		ui.TextInput->setText(QApplication::clipboard()->text());
		Translate();
	}
}

void Zword_01::OnTransparancyChanged(int val)
{
	qreal trans=(qreal)(val/100.0f);
	this->setWindowOpacity(trans);
}

void Zword_01::ReadAppConfig()
{
	QSettings conf("zword.ini",QSettings::IniFormat);

	conf.beginGroup("gui");
	QVariant val1=conf.value("MonitorClipboard");
	QVariant val2=conf.value("AlwaysOnTop");
	QVariant str1=conf.value("AppStyle");
	QVariant val3=conf.value("Transparancy");
	QVariant str2=conf.value("Lang");
	conf.endGroup();
    //-----
	mMonitorClipboard=val1.toBool();
	uiSetting.CBMonitorClipBoard->setChecked(mMonitorClipboard);
    //-----
	double val=val3.toDouble();
	qreal trans=(qreal)((val)/100.0f);
	this->setWindowOpacity(trans);
	uiSetting.SliderTransparancy->setValue(val);
    //-----
	if(0==val2.toBool())
	{
		setWindowFlags(Qt::WindowTitleHint);
	}else
	{
		setWindowFlags(Qt::WindowStaysOnTopHint);
		QPoint pos = this->pos();
		if (pos.x() < 0)
			pos.setX(0);
		if (pos.y() < 0)
			pos.setY(0);
		this->move(pos);
		this->show();
	}

	uiSetting.CBAlwaysOnTop->setChecked(val2.toBool());
    //-----
	mStyle->SetStyle(str1.toString());
	//-----
	QString modeLang=str2.toString();
	mTranslator->setModeLang(modeLang.toStdString());
}

void Zword_01::WriteAppConfig()
{
	QSettings conf("zword.ini",QSettings::IniFormat);

	conf.beginGroup("gui");
	conf.setValue("MonitorClipboard",mMonitorClipboard);
	conf.setValue("AlwaysOnTop",1);
	conf.setValue("AppStyle",mStyle->getStyle());
	conf.setValue("Transparancy",this->windowOpacity()*100.0f);
	conf.setValue("Lang","English-Indonesian");
	conf.endGroup();
}

void Zword_01::closeEvent(QCloseEvent* event)
{
	 WriteAppConfig();
}

void Zword_01::OnDictDel()
{
	std::string s=uiNewLang.lineEdit_6->text().toStdString();
	mTranslator->DeleteDictionary(s);
}