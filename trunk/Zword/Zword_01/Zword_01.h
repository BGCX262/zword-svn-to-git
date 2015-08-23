/*
 * ZWord : Flexible Multi Languanges Dictionary
 * Copyright (C) 2011-2011 Edi Ermawan <edi.ermawan@gmail.Com>
 *
 * This library is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation; either version 2.1 of the License, or (at your option)
 * any later version.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more
 * details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 *
 */

#ifndef ZWORD_01_H
#define ZWORD_01_H

#include <QtGui/QMainWindow>
#include <QtGui/QFrame>
#include <QTextDocument>
#include <QStandardItemModel>

#include "ui_zword_01.h"
#include "ui_ListLangFrame.h"
#include "ui_NewWord.h"
#include "ui_NewLang.h"
#include "ui_Setting.h"

#include "ZStyleSelector.h"
#include "ZWordHighLighter.h"
#include "ZTranslator.h"
#include <string>

class Zword_01 : public QMainWindow
{
	Q_OBJECT

public:
	Zword_01(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Zword_01();
	QFrame* mFrameAdd;
	QFrame* mFrameListLang;
	QFrame* mFrameNewLang;
	QFrame* mFrameSetting;

private:
	Ui::Zword_01Class ui;
	Ui::Frame uiAddNew;
	Ui::FrameListLang uiListLang;
	Ui::FrameNewLang uiNewLang;
	Ui::FrameSetting uiSetting;

	StyleSelector* mStyle;
	QTextDocument* mDoc;
	QTextDocument* mDocAddNewWord;
	QStandardItemModel* mListModel;
	QStandardItemModel* mListLangModel;
	QStandardItemModel* mListStyleModel;
	QList<QStandardItem*>mListSimilarRes;

	Translator* mTranslator;
	bool mMonitorClipboard;
	WordHL* mWordHL;

private slots:
	void Translate();
	void Translate(QModelIndex index);
	void ChangeLanguage(QModelIndex index);
	void ReadAppConfig();
	void WriteAppConfig();

	void OnAddNewWord();
	void OnListLang();
	void OnShowFrameAddLang();
	void OnCreateNewLang();
	void OnAddNewWordExecute1();
	void OnAddNewWordExecute2();
	void OnAddNewWordClose();
	void OnAddNewLangClose();
	void OnListLangClose();
	void OnAppSetting();
	void OnSettingClose();
	void OnChangeStyle(QModelIndex);
	void OnCBAlwaysOnTop(int);
	void OnCBMonitorClipBoard(int);
	void OnClipBoardChanged();
	void OnTransparancyChanged(int);
	void closeEvent(QCloseEvent* event);
	void OnDictDel();
};

#endif // ZWORD_01_H
