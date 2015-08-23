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

#ifndef LANG_DEF_READER
#define LANG_DEF_READER


#include <vector>
#include <string>

#include "ZLangDef.h"

class LangDefinitionReader
{
public:
	LangDefinitionReader();
	~LangDefinitionReader();
	void ReadDef(std::string nameFile="Languages.xml");
	LangData* GetLangByName(std::string& langName);
	void GetAllDataLang(std::vector<LangData*>&vecToFill)
	{
		vecToFill=mVecLang;
	};
private:
	std::vector<LangData*>mVecLang;
};

#endif