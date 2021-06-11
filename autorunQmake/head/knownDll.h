// QueryValue - Enumerates the subkeys of key and its associated values.
//     hKey - Key whose subkeys and values are to be enumerated.
#ifndef _KNOWNDLL_H
#define _KNOWNDLL_H

#include "mytable.h"
#include "fileDescription.h"
#include "timeStamp.h"
#include <string>
#include "logon.h"
//#include "tran.h"
using namespace std;


void initKnownDll(mytable *tbl)
{
    HKEY hTestKey;
    char* path = {"SYSTEM\\CurrentControlSet\\Control\\Session Manager\\KnownDLLs"};

    if( RegOpenKeyEx( HKEY_LOCAL_MACHINE,
            char2wchar(path),
            0,
            KEY_READ,
            &hTestKey) == ERROR_SUCCESS
        )
    {
        char*head;
        head = "HKLM\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\KnownDLLs";
        tbl->appenIntro(head);
        QueryValue(hTestKey,tbl);
        
    }
    else cout<<"open HKML fail!->"<<path<<endl;
    tbl->printTable();
    RegCloseKey(hTestKey);
    cout<<"process end"<<endl;
}

// int main(){
//     mytable a;
//     initLogon(&a);
//     return 1;
// }
#endif
