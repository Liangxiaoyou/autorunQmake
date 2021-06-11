#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "./head/mytable.h"

#define MAX_ROW 1024

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE




class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    //void initLogon();
//    void initDrivers();
//    void initServices();
//    void initSchedTasks();

private:
    Ui::MainWindow *ui;
    mytable tbl1;//logon
    mytable tbl2;//services
    mytable tbl3;//derivers
    mytable tbl4;//activeX
    mytable tbl5;//knowndlls
};
#endif // MAINWINDOW_H
