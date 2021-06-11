#ifndef _TRAN_H
#define _TRAN_H

#include <iostream>
#include "string.h"
#include "windows.h"
#include <QString>


void byte2charx(BYTE *a,int size,char* b){
    int i=0;
    for(;i<size;i++){
        b[i] = a[i];
        //cout<<"a["<<i<<"]="<<a[i]<<endl;
    }
    b[i]='\0';
}


void mystrcat(char* a,const char* b){
    //a 不能存着字符串常量，而应该是字符数组。字符串常量c++不允许进行修改！
    for(int i=0;;i++){
        if(a[i]=='\0'){
            for(int j=0;b[j]!='\0';j++){
                a[i] = b[j];
                i++;
            }
            a[i] ='\0';
            break;
        }
    }
}

bool mystrcmp(const char* a,const char* b){
    for(int i=0;;i++){
        if(a[i] != b[i])  return false;
        else{
            if(a[i] =='\0') return true;
        }
    }
}


//from CSDN
wchar_t * char2wchar(char* pszMultiByte){
int iSize;
wchar_t* pwszUnicode ;

//返回接受字符串所需缓冲区的大小，已经包含字符结尾符'\0'
iSize = MultiByteToWideChar(CP_ACP, 0, pszMultiByte , -1, NULL, 0); //iSize =wcslen(pwsUnicode)+1=6
pwszUnicode = (wchar_t *)malloc(iSize*sizeof(wchar_t)); //不需要 pwszUnicode = (wchar_t *)malloc((iSize+1)*sizeof(wchar_t))
MultiByteToWideChar(CP_ACP, 0, pszMultiByte , -1, pwszUnicode , iSize);
return pwszUnicode;
}

//+------------------------------------------------------------------+
//| char to WCHAR 、wchar_t、LPWSTR etc                              |
//+------------------------------------------------------------------+
char* wchar2char(const wchar_t* WStr)
  {
             // 长度设置
//              size_t len = wcslen(WStr) + 1;
//              size_t converted = 0;
              // 准备转换的对象

//              char *CStr;
//              CStr=(char*)malloc(len*sizeof(char));
//              // 转换
//              wcstombs_s(&converted, CStr, len, WStr, _TRUNCATE);
//              // 返回
//              return CStr;
//              char* ch;
//              QString str= QString::fromWCharArray(WStr);
//              QByteArray ba = str.toLatin1(); // must
//              ch=ba.data();
//              return ch;
              //wchar_t* pwszUnicode = L"Holle";  //wcslen(pwsUnicode)=5
              int iSize;
              char* pszMultiByte;
              //返回接受字符串所需缓冲区的大小，已经包含字符结尾符'\0'
              iSize = WideCharToMultiByte(CP_ACP, 0, WStr, -1, NULL, 0, NULL, NULL); //iSize =wcslen(pwsUnicode)+1=6
              pszMultiByte = (char*)malloc(iSize*sizeof(char)); //不需要 pszMultiByte = (char*)malloc(iSize*sizeof(char)+1);
              WideCharToMultiByte(CP_ACP, 0, WStr, -1, pszMultiByte, iSize, NULL, NULL);
              return pszMultiByte;
  }


#endif
