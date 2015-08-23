#include "ZStyleSelector.h"
#include "zword_01.h"
#include <QDir>

StyleSelector::StyleSelector(QMainWindow* win)
{
	mWindow=win;
}

StyleSelector::~StyleSelector()
{
}

void StyleSelector::SetStyle(QString &nameStyle)
{
	mStyleSelected="../qss/";
	mStyleSelected+=nameStyle;
	QFile file(mStyleSelected);
    file.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(file.readAll());
    
	mWindow->setStyleSheet(styleSheet);
	Zword_01& mainwin=static_cast<Zword_01&>(*mWindow);
	mainwin.mFrameAdd->setStyleSheet(styleSheet);
	mainwin.mFrameListLang->setStyleSheet(styleSheet);
	mainwin.mFrameSetting->setStyleSheet(styleSheet);
	mainwin.mFrameNewLang->setStyleSheet(styleSheet);
	mStyleSelected=nameStyle;
}

void StyleSelector::LoadStyle(QStandardItemModel& model)
{
	QStringList list = QDir("../qss/", "*.qss").entryList();
	foreach(const QString& s,list)
	{
		model.appendRow(new QStandardItem(s));
	}
}

QString StyleSelector::getStyle()
{
	return mStyleSelected;
}