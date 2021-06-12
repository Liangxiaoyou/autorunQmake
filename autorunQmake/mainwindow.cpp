#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "./head/logon.h"
#include "./head/serviceDriver.h"
#include "./head/activeX.h"
#include "./head/knownDll.h"
//#include "./head/sig.h"
#include "./head/verify.h"
#include "./head/schedTask2.h"
//#include "./head/getCert.h"
#include <qstring.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //QTextCodec *code =QtextCodeC::codecForName("GBK");
    ui->setupUi(this);
//    QString string = "...";
//    QTextCodec *codec = QTextCodec::codecForName("gb2312");
//    QByteArray encodedString = codec->fromUnicode(string);
    QTableWidgetItem *item;
        initSerDri(&tbl2,&tbl3);
    initLogon(&tbl1);

    initActiveX(&tbl4);
    initKnownDll(&tbl5);
    initSchedTasks(&tbl6);
    char result [1024];
//    //test
//    char*CStr = "你好";
//    size_t len = strlen(CStr) + 1;
//    size_t converted = 0;
//    wchar_t*WStr;
//    WStr=(wchar_t*)malloc(len*sizeof(wchar_t));
//    mbstowcs_s(&converted, WStr, len, CStr, _TRUNCATE);

//    //end test
    for(int i=0;i<tbl1.getNrow();i++){
        ui->tableWidget_9->insertRow(i);
        for(int j=0;j<5;j++){
            tbl1.getItem(i,j,result);

            //item = new QTableWidgetItem(result);
            //应该按照utf-8去解析数据·
            string a(result);
            QString b =QString::fromLocal8Bit(a);
            item = new QTableWidgetItem(b);
            //
            if(tbl1.isIntro(i))
                item->setBackground(QColor(0,200,255));//设为淡蓝色
            ui->tableWidget_9->setItem(i,j,item);

        }
        if(tbl1.isIntro(i)){

            ui->tableWidget_9->setSpan(i,0,1,5);
        }
    }
    for(int i=0;i<tbl2.getNrow();i++){
        ui->tableWidget_8->insertRow(i);
        for(int j=0;j<5;j++){
            tbl2.getItem(i,j,result);

            //item = new QTableWidgetItem(result);
            //应该按照utf-8去解析数据·
            string a(result);
            QString b =QString::fromLocal8Bit(a);
            item = new QTableWidgetItem(b);
            //
            if(tbl2.isIntro(i))
                item->setBackground(QColor(0,200,255));//设为淡蓝色

            ui->tableWidget_8->setItem(i,j,item);

        }
        if(tbl2.isIntro(i)){
            ui->tableWidget_8->setSpan(i,0,1,5);
        }
    }

    for(int i=0;i<tbl3.getNrow();i++){
        ui->tableWidget_7->insertRow(i);
        for(int j=0;j<5;j++){
            tbl3.getItem(i,j,result);

            //item = new QTableWidgetItem(result);
            //应该按照utf-8去解析数据·
            string a(result);
            QString b =QString::fromLocal8Bit(a);
            item = new QTableWidgetItem(b);
            //
            if(tbl3.isIntro(i))
                item->setBackground(QColor(0,200,255));//设为淡蓝色
            //应该按照utf-8去解析数据·
            ui->tableWidget_7->setItem(i,j,item);

        }
        if(tbl3.isIntro(i)){
            ui->tableWidget_7->setSpan(i,0,1,5);
        }
    }
    for(int i=0;i<tbl4.getNrow();i++){
        ui->tableWidget_6->insertRow(i);
        for(int j=0;j<5;j++){
            tbl4.getItem(i,j,result);

            //item = new QTableWidgetItem(result);
            //应该按照utf-8去解析数据·
            string a(result);
            QString b =QString::fromLocal8Bit(a);
            item = new QTableWidgetItem(b);
            //
            if(tbl4.isIntro(i))
                item->setBackground(QColor(0,200,255));//设为淡蓝色
            //应该按照utf-8去解析数据·
            ui->tableWidget_6->setItem(i,j,item);

        }
        if(tbl4.isIntro(i)){
            ui->tableWidget_6->setSpan(i,0,1,5);
        }
    }
    for(int i=0;i<tbl5.getNrow();i++){
        ui->tableWidget_5->insertRow(i);
        for(int j=0;j<5;j++){
            tbl5.getItem(i,j,result);

            //item = new QTableWidgetItem(result);
            //应该按照utf-8去解析数据·
            string a(result);
            QString b =QString::fromLocal8Bit(a);
            item = new QTableWidgetItem(b);
            //
            if(tbl5.isIntro(i))
                item->setBackground(QColor(0,200,255));//设为淡蓝色
            //应该按照utf-8去解析数据·
            ui->tableWidget_5->setItem(i,j,item);

        }
        if(tbl5.isIntro(i)){
            ui->tableWidget_5->setSpan(i,0,1,5);
        }
    }
    for(int i=0;i<tbl6.getNrow();i++){
        ui->tableWidget_4->insertRow(i);
        for(int j=0;j<5;j++){
            tbl6.getItem(i,j,result);

            //item = new QTableWidgetItem(result);
            //应该按照utf-8去解析数据·
            string a(result);
            QString b =QString::fromLocal8Bit(a);
            item = new QTableWidgetItem(b);
            //
            if(tbl6.isIntro(i))
                item->setBackground(QColor(0,200,255));//设为淡蓝色
            //应该按照utf-8去解析数据·
            ui->tableWidget_4->setItem(i,j,item);

        }
        if(tbl6.isIntro(i)){
            ui->tableWidget_4->setSpan(i,0,1,5);
        }
    }
    cout<<"@141"<<endl;
            ui->tableWidget_9->horizontalHeader()->setVisible(true);
            ui->tableWidget_8->horizontalHeader()->setVisible(true);
            ui->tableWidget_7->horizontalHeader()->setVisible(true);
            ui->tableWidget_6->horizontalHeader()->setVisible(true);
            ui->tableWidget_5->horizontalHeader()->setVisible(true);
            ui->tableWidget_4->horizontalHeader()->setVisible(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}




