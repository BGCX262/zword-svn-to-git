
#include "ZDBHelper.h"
#include <algorithm>//untuk std::for_each

DBHelper* DBHelper::mThis;

DBHelper::DBHelper()
 {
	mErrMsg=0;
	mResultCount=0;
	mStatusOpen=false;
 }

DBHelper::~DBHelper()
 {
 }

bool DBHelper::Open(const char* nameDB)
 {
   int res;
   res=sqlite3_open(nameDB, &mDB);

   if(0==res)
   {
   mStatusOpen=true;
   return 1;
   }
   else
   {
	   std::cout<<"Failed open database. Error code: "<<std::endl;
       mStatusOpen=false;
	   return 0;
   }
 }

void DBHelper::Close()
 {
   if(mStatusOpen)
   {
	sqlite3_close(mDB);
	mStatusOpen=false;
   }
 }

bool DBHelper::Exec(const char* sqlQuery)
 {
   ClearPrevResult();
   mResultCount=0;
   int res=sqlite3_exec(mDB,sqlQuery,&DBHelper::Callback,0,&mErrMsg);
   if(res!=SQLITE_OK)
   {
     std::cout<<"Failed open database. Error code: "<<res<<std::endl;
     mResultCount=0;
	 return 0;
   }
   return 1;
 }

unsigned int DBHelper::GetResultCount()const
 {
   return mResultCount;
 }

int DBHelper::Callback(void *NotUsed, int argc, char **argv, char **azColName)
{
   int i;
   NotUsed=0;

   DataResult* pDR=new DataResult();

   for(i=0; i<argc; i++)
   {
    pDR->AddData(azColName[i],argv[i]);
   }
   mThis->mVecResult.push_back(pDR);
   mThis->mResultCount=mThis->mResultCount+1;
   //std::cout<<"Result :"<<mThis->mVecResult.size()<<std::endl;
   return 0;
 }

DBHelper& DBHelper::Instance()
{
	if(0==mThis)
 {
 mThis=new DBHelper();

 }
   return *mThis;
 }

void DBHelper::ClearPrevResult()
 {
   if(!mVecResult.empty())
   {
     std::for_each(mVecResult.begin(),mVecResult.end(),Deleter<DataResult>());
     mVecResult.clear();
   }
 }

void DBHelper::GetResultVector(std::vector<DataResult*>& outVec)const
{
	outVec=mVecResult;
}
