/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef AUTORUN_H
#define AUTORUN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QTableWidget *tableWidget_9;
    QWidget *tab_2;
    QTableWidget *tableWidget_8;
    QWidget *tab_3;
    QTableWidget *tableWidget_7;
    QWidget *tab_4;
    QTableWidget *tableWidget_6;
    QWidget *tab_5;
    QTableWidget *tableWidget_5;
    QWidget *tab;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1047, 489);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1011, 431));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tab_1 = new QWidget();
        tab_1->setObjectName(QStringLiteral("tab_1"));
        tableWidget_9 = new QTableWidget(tab_1);
        if (tableWidget_9->columnCount() < 5)
            tableWidget_9->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_9->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_9->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_9->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_9->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_9->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget_9->setObjectName(QStringLiteral("tableWidget_9"));
        tableWidget_9->setGeometry(QRect(0, 0, 1000, 400));
        sizePolicy.setHeightForWidth(tableWidget_9->sizePolicy().hasHeightForWidth());
        tableWidget_9->setSizePolicy(sizePolicy);
        tableWidget_9->setMinimumSize(QSize(0, 0));
        tableWidget_9->setMaximumSize(QSize(2001, 16777215));
        tableWidget_9->setAutoFillBackground(true);
        tableWidget_9->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget_9->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget_9->setColumnCount(5);
        tableWidget_9->horizontalHeader()->setVisible(false);
        tableWidget_9->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_9->horizontalHeader()->setDefaultSectionSize(150);
        tableWidget_9->horizontalHeader()->setHighlightSections(true);
        tableWidget_9->horizontalHeader()->setMinimumSectionSize(30);
        tableWidget_9->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_9->horizontalHeader()->setStretchLastSection(true);
        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tableWidget_8 = new QTableWidget(tab_2);
        if (tableWidget_8->columnCount() < 5)
            tableWidget_8->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_8->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_8->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_8->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_8->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_8->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        tableWidget_8->setObjectName(QStringLiteral("tableWidget_8"));
        tableWidget_8->setGeometry(QRect(0, 0, 1000, 400));
        sizePolicy.setHeightForWidth(tableWidget_8->sizePolicy().hasHeightForWidth());
        tableWidget_8->setSizePolicy(sizePolicy);
        tableWidget_8->setMinimumSize(QSize(0, 0));
        tableWidget_8->setMaximumSize(QSize(2001, 16777215));
        tableWidget_8->setAutoFillBackground(true);
        tableWidget_8->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget_8->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget_8->setColumnCount(5);
        tableWidget_8->horizontalHeader()->setVisible(false);
        tableWidget_8->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_8->horizontalHeader()->setDefaultSectionSize(150);
        tableWidget_8->horizontalHeader()->setHighlightSections(true);
        tableWidget_8->horizontalHeader()->setMinimumSectionSize(30);
        tableWidget_8->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_8->horizontalHeader()->setStretchLastSection(true);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tableWidget_7 = new QTableWidget(tab_3);
        if (tableWidget_7->columnCount() < 5)
            tableWidget_7->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(4, __qtablewidgetitem14);
        tableWidget_7->setObjectName(QStringLiteral("tableWidget_7"));
        tableWidget_7->setGeometry(QRect(0, 0, 1000, 400));
        sizePolicy.setHeightForWidth(tableWidget_7->sizePolicy().hasHeightForWidth());
        tableWidget_7->setSizePolicy(sizePolicy);
        tableWidget_7->setMinimumSize(QSize(0, 0));
        tableWidget_7->setMaximumSize(QSize(2001, 16777215));
        tableWidget_7->setAutoFillBackground(true);
        tableWidget_7->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget_7->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget_7->setColumnCount(5);
        tableWidget_7->horizontalHeader()->setVisible(false);
        tableWidget_7->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_7->horizontalHeader()->setDefaultSectionSize(150);
        tableWidget_7->horizontalHeader()->setHighlightSections(true);
        tableWidget_7->horizontalHeader()->setMinimumSectionSize(30);
        tableWidget_7->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_7->horizontalHeader()->setStretchLastSection(true);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tableWidget_6 = new QTableWidget(tab_4);
        if (tableWidget_6->columnCount() < 5)
            tableWidget_6->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(3, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(4, __qtablewidgetitem19);
        tableWidget_6->setObjectName(QStringLiteral("tableWidget_6"));
        tableWidget_6->setGeometry(QRect(0, 0, 1091, 831));
        tableWidget_6->setColumnCount(5);
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tableWidget_5 = new QTableWidget(tab_5);
        if (tableWidget_5->columnCount() < 5)
            tableWidget_5->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(1, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(2, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(3, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(4, __qtablewidgetitem24);
        tableWidget_5->setObjectName(QStringLiteral("tableWidget_5"));
        tableWidget_5->setGeometry(QRect(0, 0, 1091, 831));
        tableWidget_5->setColumnCount(5);
        tabWidget->addTab(tab_5, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1047, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_9->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Autorun Entry", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_9->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Description", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_9->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Publisher", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_9->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Image Path", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_9->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Timestamp", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("MainWindow", "Logon", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_8->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Autorun Entry", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_8->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Description", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_8->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Publisher", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_8->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Image Path", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_8->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Timestamp", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Services", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_7->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "Autorun Entry", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_7->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "Description", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_7->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "Publisher", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_7->horizontalHeaderItem(3);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "Image Path", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_7->horizontalHeaderItem(4);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "Timestamp", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Drivers", 0));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_6->horizontalHeaderItem(0);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "Autorun Entry", 0));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_6->horizontalHeaderItem(1);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "Description", 0));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_6->horizontalHeaderItem(2);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "Publisher", 0));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_6->horizontalHeaderItem(3);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "Image Path", 0));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_6->horizontalHeaderItem(4);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "Timestamp", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Schedules Tasks", 0));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_5->horizontalHeaderItem(0);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "Autorun Entry", 0));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_5->horizontalHeaderItem(1);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "Description", 0));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_5->horizontalHeaderItem(2);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "Publisher", 0));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_5->horizontalHeaderItem(3);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "Image Path", 0));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget_5->horizontalHeaderItem(4);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "Timestamp", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "KnownDLLs", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Internet Explorer", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // AUTORUN_H
