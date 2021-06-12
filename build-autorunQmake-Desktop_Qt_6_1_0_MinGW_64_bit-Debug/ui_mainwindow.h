/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
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
    QWidget *tab_6;
    QTableWidget *tableWidget_4;
    QWidget *tab;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1047, 489);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1011, 431));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
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
        tableWidget_9->setObjectName(QString::fromUtf8("tableWidget_9"));
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
        tableWidget_9->horizontalHeader()->setMinimumSectionSize(30);
        tableWidget_9->horizontalHeader()->setDefaultSectionSize(150);
        tableWidget_9->horizontalHeader()->setHighlightSections(true);
        tableWidget_9->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_9->horizontalHeader()->setStretchLastSection(true);
        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
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
        tableWidget_8->setObjectName(QString::fromUtf8("tableWidget_8"));
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
        tableWidget_8->horizontalHeader()->setMinimumSectionSize(30);
        tableWidget_8->horizontalHeader()->setDefaultSectionSize(150);
        tableWidget_8->horizontalHeader()->setHighlightSections(true);
        tableWidget_8->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_8->horizontalHeader()->setStretchLastSection(true);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
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
        tableWidget_7->setObjectName(QString::fromUtf8("tableWidget_7"));
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
        tableWidget_7->horizontalHeader()->setMinimumSectionSize(30);
        tableWidget_7->horizontalHeader()->setDefaultSectionSize(150);
        tableWidget_7->horizontalHeader()->setHighlightSections(true);
        tableWidget_7->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_7->horizontalHeader()->setStretchLastSection(true);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
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
        tableWidget_6->setObjectName(QString::fromUtf8("tableWidget_6"));
        tableWidget_6->setGeometry(QRect(0, 0, 1000, 400));
        sizePolicy.setHeightForWidth(tableWidget_6->sizePolicy().hasHeightForWidth());
        tableWidget_6->setSizePolicy(sizePolicy);
        tableWidget_6->setMinimumSize(QSize(0, 0));
        tableWidget_6->setMaximumSize(QSize(2001, 16777215));
        tableWidget_6->setAutoFillBackground(true);
        tableWidget_6->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget_6->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget_6->setColumnCount(5);
        tableWidget_6->horizontalHeader()->setVisible(false);
        tableWidget_6->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_6->horizontalHeader()->setMinimumSectionSize(30);
        tableWidget_6->horizontalHeader()->setDefaultSectionSize(150);
        tableWidget_6->horizontalHeader()->setHighlightSections(true);
        tableWidget_6->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_6->horizontalHeader()->setStretchLastSection(true);
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
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
        tableWidget_5->setObjectName(QString::fromUtf8("tableWidget_5"));
        tableWidget_5->setGeometry(QRect(0, 0, 1000, 400));
        sizePolicy.setHeightForWidth(tableWidget_5->sizePolicy().hasHeightForWidth());
        tableWidget_5->setSizePolicy(sizePolicy);
        tableWidget_5->setMinimumSize(QSize(0, 0));
        tableWidget_5->setMaximumSize(QSize(2001, 16777215));
        tableWidget_5->setAutoFillBackground(true);
        tableWidget_5->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget_5->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget_5->setColumnCount(5);
        tableWidget_5->horizontalHeader()->setVisible(false);
        tableWidget_5->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_5->horizontalHeader()->setMinimumSectionSize(30);
        tableWidget_5->horizontalHeader()->setDefaultSectionSize(150);
        tableWidget_5->horizontalHeader()->setHighlightSections(true);
        tableWidget_5->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_5->horizontalHeader()->setStretchLastSection(true);
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        tableWidget_4 = new QTableWidget(tab_6);
        if (tableWidget_4->columnCount() < 5)
            tableWidget_4->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(0, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(1, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(2, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(3, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(4, __qtablewidgetitem29);
        tableWidget_4->setObjectName(QString::fromUtf8("tableWidget_4"));
        tableWidget_4->setGeometry(QRect(0, 0, 1000, 400));
        sizePolicy.setHeightForWidth(tableWidget_4->sizePolicy().hasHeightForWidth());
        tableWidget_4->setSizePolicy(sizePolicy);
        tableWidget_4->setMinimumSize(QSize(0, 0));
        tableWidget_4->setMaximumSize(QSize(2001, 16777215));
        tableWidget_4->setAutoFillBackground(true);
        tableWidget_4->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget_4->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget_4->setColumnCount(5);
        tableWidget_4->horizontalHeader()->setVisible(false);
        tableWidget_4->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_4->horizontalHeader()->setMinimumSectionSize(30);
        tableWidget_4->horizontalHeader()->setDefaultSectionSize(150);
        tableWidget_4->horizontalHeader()->setHighlightSections(true);
        tableWidget_4->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_4->horizontalHeader()->setStretchLastSection(true);
        tabWidget->addTab(tab_6, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        textBrowser = new QTextBrowser(tab);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(180, 20, 641, 311));
        textBrowser->setLineWrapMode(QTextEdit::WidgetWidth);
        textBrowser->setLineWrapColumnOrWidth(1);
        tabWidget->addTab(tab, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1047, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_9->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Autorun Entry", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_9->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_9->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Publisher", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_9->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Image Path", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_9->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Timestamp", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("MainWindow", "Logon", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_8->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Autorun Entry", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_8->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_8->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "Publisher", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_8->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "Image Path", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_8->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "Timestamp", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Drivers", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_7->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "Autorun Entry", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_7->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_7->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "Publisher", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_7->horizontalHeaderItem(3);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "Image Path", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_7->horizontalHeaderItem(4);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "Timestamp", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Services", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_6->horizontalHeaderItem(0);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "Autorun Entry", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_6->horizontalHeaderItem(1);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_6->horizontalHeaderItem(2);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "Publisher", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_6->horizontalHeaderItem(3);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "Image Path", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_6->horizontalHeaderItem(4);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "Timestamp", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "ActiveX", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_5->horizontalHeaderItem(0);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "Autorun Entry", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_5->horizontalHeaderItem(1);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_5->horizontalHeaderItem(2);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "Publisher", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_5->horizontalHeaderItem(3);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "Image Path", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget_5->horizontalHeaderItem(4);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindow", "Timestamp", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "KnownDLLs", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget_4->horizontalHeaderItem(0);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("MainWindow", "Autorun Entry", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget_4->horizontalHeaderItem(1);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget_4->horizontalHeaderItem(2);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("MainWindow", "Publisher", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget_4->horizontalHeaderItem(3);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("MainWindow", "Image Path", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget_4->horizontalHeaderItem(4);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("MainWindow", "Timestamp", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("MainWindow", "Scheduled Tasks", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">\346\242\201\346\230\214\345\217\213</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px;"
                        " margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">518030910107</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">This is an autorun app for IS405 homework!</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Finished on July 10th 2021</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Thanks for your reading!</span"
                        "></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">for code link in git:</p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">https://github.com/Liangxiaoyou/autorun</p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "info", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\344\275\240\345\245\275 ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
