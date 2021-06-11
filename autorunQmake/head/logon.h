// QueryValue - Enumerates the subkeys of key and its associated values.
//     hKey - Key whose subkeys and values are to be enumerated.
#ifndef _LOGON_H
#define _LOGON_H

#include "mytable.h"
#include "fileDescription.h"
#include "timeStamp.h"
#include "string.h"
#include "windows.h"
#include <cstring>
//#include "sig.h"
#include <qstring.h>
#include "tran.h"
#include "verify.h"

using namespace std;







//会把注册表某键下的值存储到表格tbl里，以append的形式，不会覆盖原有内容
void QueryValue(HKEY hKey,mytable *tbl) 
{ 
/*    TCHAR    achKey[MAX_KEY_LENGTH];   // buffer for subkey name
    DWORD    cbName;      */             // size of name string
    TCHAR    achClass[MAX_PATH] = TEXT("");  // buffer for class name 
    DWORD    cchClassName = MAX_PATH;  // size of class string 
    DWORD    cSubKeys=0;               // number of subkeys 
    DWORD    cbMaxSubKey;              // longest subkey size 
    DWORD    cchMaxClass;              // longest class string 
    DWORD    cValues=0;              // number of values for key 
    DWORD    cchMaxValue;          // longest value name 
    DWORD    cbMaxValueData;       // longest value data 
    DWORD    cbSecurityDescriptor; // size of security descriptor 
    FILETIME ftLastWriteTime;      // last write time 
 
    DWORD i, retCode; 
 
    char  achValue[MAX_VALUE_NAME];
    DWORD cchValue = MAX_VALUE_NAME; 

//    LPDWORD lpType;
//    LPBYTE  lpData ;
//    LPDWORD lpcbData;
    BYTE  achData[MAX_VALUE_NAME];
    DWORD cchData = MAX_VALUE_NAME;
    DWORD type;

//    HANDLE     hFile;
//    FILETIME *lpLastWriteTime;
//    SYSTEMTIME  *lpSystemTime;
    // Get the class name and the value count. 
    retCode = RegQueryInfoKey(
        hKey,                    // key handle 
        achClass,                // buffer for class name 
        &cchClassName,           // size of class string 
        NULL,                    // reserved 
        
        &cSubKeys,               // number of subkeys 
        &cbMaxSubKey,            // longest subkey size 
        &cchMaxClass,            // longest class string 

        &cValues,                // number of values for this key 
        &cchMaxValue,            // longest value name 
        &cbMaxValueData,         // longest value data 
        &cbSecurityDescriptor,   // security descriptor 
        &ftLastWriteTime);       // last write time 
    // cout<<"cSubKeys is "<<cSubKeys<<endl;
    // printf("cSubKeys is %d\n",cSubKeys);
    // printf("cValues is %d\n",cValues);
    // cout<<"cValues is "<<cValues<<endl;
    // Enumerate the subkeys, until RegEnumKeyEx fails.
    /*
    if (cSubKeys)
    {
        printf( "\nNumber of subkeys: %d\n", cSubKeys);

        for (i=0; i<cSubKeys; i++) 
        { 
            cbName = MAX_KEY_LENGTH;
            retCode = RegEnumKeyEx(
                     hKey, 
                     i,
                     achKey, 
                     &cbName, //返回achkey的大小,字节为单位
                     NULL, 
                     NULL, 
                     NULL, 
                     &ftLastWriteTime); 
            if (retCode == ERROR_SUCCESS) 
            {
                _tprintf(TEXT("(%d) %s\n"), i+1, achKey);
            }
        }
    } 
    */
    // Enumerate the key values. 
    if (cValues) 
    {
        printf( "\nNumber of values: %d\n", cValues);

        for (i=0, retCode=ERROR_SUCCESS; i<cValues; i++) 
        { 
            cchValue = MAX_VALUE_NAME; 
            cchData = MAX_VALUE_NAME;
            achValue[0] = '\0';
            achData[0] = '\0';
            //cout<<"@"<<endl;//如果不加这个endl,那么就不会显示打印的结果
            retCode = RegEnumValueA(
                hKey,
                i, 
                achValue,
                &cchValue, 
                NULL, 
                &type,
                achData,
                &cchData
                );
            //cout<<"@"<<endl;
            if (retCode == ERROR_SUCCESS) 
            { 
                //do not print achvalue cause achvalue may not end with '\0'
                //_tprintf(TEXT("(%d) %s\n"), i+1, achValue);//千万别随便直接打印啊，官网的代码有问题
                if(achData == NULL||achData[0] =='\0') cout<<"lpData is NULL\n";
                else {
                    //cout<<"achdata type is "<<type<<endl;
                    //cout<<"lpData is :"<<achData<<"."<<endl;
                    char path[cchData];
                    char description[1024]={""};
                    char publisher[1024]={""};
                    char timestamp[1024]={""};     
                    byte2charx(achData,cchData,path);

                    //cout<<"result is "<<result<<endl;
                    //标准化路径
                    char spath[MAX_VALUE_NAME];
                    getPath(path,spath);

                    //获取文件的描述和发布者
                    get_file_info(spath,"FileDescription",description);
                    cout<<"the item description is"<<description<<endl;
                    get_file_info(spath,"CompanyName",publisher);

                    bool isVerified = VerifyEmbeddedSignature(char2wchar(spath));
                    if(isVerified){
                        mystrcat(publisher,"(verified)");
                    }
                    else{
                        mystrcat(publisher,"(not verified)");
                    }

                    //获取文件的时间戳
                    get_time_stamp(spath,timestamp);
                    tbl->appendRow( achValue,
                                    description,
                                    publisher,
                                    spath,
                                    timestamp);
                    //delete [] path;
                }
            }
            else {
                cout<<"("<<i+1<<") read key value "<< "error\nerror code is "<<retCode<<"\nwe need the achdata size is"<<cchData<<endl;
                cout<<"\nwe need the achValue size is"<<cchValue<<endl;
            }

        }
    }

}

void initLogon(mytable *tbl)
{
    HKEY hTestKey;
    char* path[5] = {"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run",
                    "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer\\Run",
                    "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\RunOnce",
                    "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\RunOnceEx",
                    "SOFTWARE\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion\\Run"};
    for(int i=0;i<5;i++){
        if( RegOpenKeyEx( HKEY_LOCAL_MACHINE,
                char2wchar(path[i]),
                0,
                KEY_READ,
                &hTestKey) == ERROR_SUCCESS
            )
        {
            char*head;
            switch(i){
                case 0:head = "HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run";break;
                case 1:head = "HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer\\Run";break;
                case 2:head = "HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\RunOnce";break;
                case 3:head = "HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\RunOnceEx";break;
                case 4:head = "HKLM\\SOFTWARE\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion\\Run";break;
            }
            tbl->appenIntro(head);
            QueryValue(hTestKey,tbl);
            RegCloseKey(hTestKey);
        }
        else cout<<"open HKML fail!->"<<path[i]<<endl;

        if( RegOpenKeyEx( HKEY_CURRENT_USER,
                char2wchar( path[i]),
                0,
                KEY_READ,
                &hTestKey) == ERROR_SUCCESS
            )
        {
            char*head;
            switch(i){
                case 0:head = "HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run";break;
                case 1:head = "HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer\\Run";break;
                case 2:head = "HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\RunOnce";break;
                case 3:head = "HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\RunOnceEx";break;
                case 4:head = "HKCU\\SOFTWARE\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion\\Run";break;
            }
            tbl->appenIntro(head);
            QueryValue(hTestKey,tbl);
            RegCloseKey(hTestKey);
        }
        else cout<<"open HKCU fail!->"<<path[i]<<endl;
    }
    
    tbl->printTable();
   cout<<"process end"<<endl;
}

// int main(){
//     mytable a;
//     initLogon(&a);
//     return 1;
// }



#endif
