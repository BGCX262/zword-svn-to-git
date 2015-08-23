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

#ifndef Z_TRANSLATOR
#define Z_TRANSLATOR

#include <string>
#include <vector>
#include "ZDBHelper.h"

#include <QStandardItemModel>
#include "ZLangDefReader.h"

#define LINEFEED 10
#define CARRIAGE_RETURN 13

using namespace std;

class Translator
{
public:
	Translator();
	~Translator();
	std::string Translate(std::string& word);
	void TranslateSimilar(std::string& word,QStandardItemModel& itemModel);
	void setModeLang(std::string& modeLang);
	LangDefinitionReader* GetAllLanguanges()
	{
		return &mLanguanges;
	};
	void AddNewWord(std::string& sFrom,std::string& sTo);
	void AddNewWordFromFile(std::string& nameFile);
	void AddNewWordFromEdit(std::string& str);
	void DeleteDictionary(std::string& str);
	int AddNewLanguanges(LangData& lang);
	
	bool CheckWordExist(std::string& word);
	void DeleteWord(std::string& word);
private:
	std::string mModeLang;
	std::string mQuery1;
	std::string mQuery2;
	std::string mQuery3;
	std::string mFrom,mTo;
	LangDefinitionReader mLanguanges;
	std::string NormalizeString(std::string& str);
	bool isAlphabet(char ch);
};

#endif