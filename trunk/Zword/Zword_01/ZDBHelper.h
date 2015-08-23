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

#ifndef Z_DB_HELPER
#define Z_DB_HELPER

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <map>

#include "sqlite3.h"


typedef std::map<std::string,std::string> MapStrStr;
typedef std::pair<std::string,std::string> PairStrStr;

 template< typename T > //delete inside vector
 class Deleter
 {
 public:
    void operator()(const T* it) const
    {
      delete it;
    }
 };

 class DataResult
 {
 public:
    DataResult(){};
   ~DataResult()
    {
     mMapStrStr.clear();
    };
    void AddData(const std::string& sVal1,const std::string& sVal2)
    {
    mMapStrStr.insert(PairStrStr(sVal1,sVal2));
    }
    void GetDataByFieldName(const std::string& fieldName,std::string& out)
    {
    MapStrStr::iterator it;
    for(it = mMapStrStr.begin(); it!=mMapStrStr.end(); ++it)
     {
     if( fieldName ==it->first)
       {
       out=it->second;
       }
     }
    }
 private:
    MapStrStr mMapStrStr;
 };

 class DBHelper
 {
 public:
    bool Open(const char* nameDB);
    void Close();
    bool Exec(const char* sqlQuery);
    unsigned int GetResultCount()const;
    void GetResultVector(std::vector<DataResult*>& outVec)const;
	bool isOpen()
	{
		return mStatusOpen;
	};

    static DBHelper& Instance();
 private:
    int mResultCount;
    bool mStatusOpen;
    char* mErrMsg;
    sqlite3* mDB;
    std::vector<DataResult*>mVecResult;
    static DBHelper* mThis;
 private:
    DBHelper();
   ~DBHelper();
    static int Callback(void *NotUsed, int argc, char **argv, char **azColName);
    void ClearPrevResult();
 };

#endif

 
