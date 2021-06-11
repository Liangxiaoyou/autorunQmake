
#ifndef _MYTABLE_H
#define _MYTABLE_H
#include <windows.h>
#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <cstring>

#define MAX_ROW 1024
#define MAX_KEY_LENGTH 255
#define MAX_VALUE_NAME 1024
using namespace std;

class myrow{
    char *item[5];
    int sig; //when sig = 1, means that it is an introduction row
public:
    myrow(){sig = 0;}
    ~myrow(){
        for(int i=0;i<5;i++){
            if(item[i]) delete [] item[i];
        }
    }
    void setRow(int n,char * content){
        //cout<<"@"<<endl;
        item[n] = new char[MAX_VALUE_NAME];
        strcpy(item[n],content);
        //cout<<"@"<<endl;
    }
    void setIntro(char* content){
        cout<<"@@"<<content<<endl;
        sig = 1;
        item[0] = new char [MAX_VALUE_NAME];
        strcpy(item[0],content);
        item[1] ="";
        item[2] ="";
        item[3] ="";
        item[4] ="";
        }
    bool isIntro(){return sig==1?true:false;}
    char* getItem(int i){return item[i];}
};

class mytable{
    myrow tbl[MAX_ROW];
    int nrow;
public:
    mytable(){nrow = 0;}
    void setItem(int row,int col,char* ctt){
        if(!tbl[row].isIntro()){
            
            tbl[row].setRow(col,ctt);
        }
        else{cout<<"can not set item to an intro row"<<endl;}
    }
    void appendRow(char*a,char*b,char*c,char*d,char*e){
        setItem(nrow,0,a);
        setItem(nrow,1,b);
        setItem(nrow,2,c);
        setItem(nrow,3,d);
        setItem(nrow,4,e);
        this->nrow++;
        //cout<<"the row num is"<<nrow<<endl;
    }
    // void setIntro(int row,char * ctt){
    //     tbl[row].setIntro(ctt);
    // }
    void appenIntro(char* ctt){
        tbl[nrow].setIntro(ctt);
        nrow++;
    }
    void printTable(){
        cout<<"the table is:"<<nrow<<endl;
        for(int i=0;i<nrow;i++){
            for(int j=0;j<5;j++){
                cout<<"\t"<<tbl[i].getItem(j);
            }
            cout<<endl;
        }
    }
    int getNrow(){return nrow;}
    void getItem(int i,int j,char* result){
        strcpy(result,tbl[i].getItem(j));
    }
    bool isIntro(int row){
        return tbl[row].isIntro();
    }
};

#endif
