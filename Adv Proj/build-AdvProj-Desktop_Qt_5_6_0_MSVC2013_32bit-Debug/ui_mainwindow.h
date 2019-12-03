/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *Op1label;
    QLabel *Op2label;
    QPushButton *NorthButton;
    QPushButton *WestButton;
    QPushButton *EastButton;
    QPushButton *SouthButton;
    QLabel *labelInfo;
    QLabel *Heroname;
    QLabel *labelHealth;
    QProgressBar *Health_of_hero;
    QLabel *Money;
    QLabel *labelItems;
    QListView *listView;
    QPushButton *ShopButton;
    QLabel *Oplabel;
    QLabel *labelGo;
    QPushButton *TakeMoney;
    QPushButton *suicide;
    QLabel *labelItemsInCurrentRoom;
    QListView *listView_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(795, 441);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Op1label = new QLabel(centralWidget);
        Op1label->setObjectName(QStringLiteral("Op1label"));
        Op1label->setGeometry(QRect(20, 10, 111, 16));
        Op2label = new QLabel(centralWidget);
        Op2label->setObjectName(QStringLiteral("Op2label"));
        Op2label->setGeometry(QRect(20, 50, 531, 16));
        NorthButton = new QPushButton(centralWidget);
        NorthButton->setObjectName(QStringLiteral("NorthButton"));
        NorthButton->setGeometry(QRect(110, 280, 75, 23));
        WestButton = new QPushButton(centralWidget);
        WestButton->setObjectName(QStringLiteral("WestButton"));
        WestButton->setGeometry(QRect(30, 310, 75, 23));
        EastButton = new QPushButton(centralWidget);
        EastButton->setObjectName(QStringLiteral("EastButton"));
        EastButton->setGeometry(QRect(190, 310, 75, 23));
        SouthButton = new QPushButton(centralWidget);
        SouthButton->setObjectName(QStringLiteral("SouthButton"));
        SouthButton->setGeometry(QRect(110, 340, 75, 23));
        labelInfo = new QLabel(centralWidget);
        labelInfo->setObjectName(QStringLiteral("labelInfo"));
        labelInfo->setGeometry(QRect(580, 10, 111, 16));
        Heroname = new QLabel(centralWidget);
        Heroname->setObjectName(QStringLiteral("Heroname"));
        Heroname->setGeometry(QRect(580, 40, 101, 16));
        labelHealth = new QLabel(centralWidget);
        labelHealth->setObjectName(QStringLiteral("labelHealth"));
        labelHealth->setGeometry(QRect(580, 60, 111, 16));
        Health_of_hero = new QProgressBar(centralWidget);
        Health_of_hero->setObjectName(QStringLiteral("Health_of_hero"));
        Health_of_hero->setGeometry(QRect(580, 90, 191, 23));
        Health_of_hero->setValue(100);
        Money = new QLabel(centralWidget);
        Money->setObjectName(QStringLiteral("Money"));
        Money->setGeometry(QRect(580, 120, 131, 16));
        labelItems = new QLabel(centralWidget);
        labelItems->setObjectName(QStringLiteral("labelItems"));
        labelItems->setGeometry(QRect(580, 150, 111, 16));
        listView = new QListView(centralWidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(580, 180, 201, 91));
        ShopButton = new QPushButton(centralWidget);
        ShopButton->setObjectName(QStringLiteral("ShopButton"));
        ShopButton->setGeometry(QRect(584, 290, 191, 23));
        Oplabel = new QLabel(centralWidget);
        Oplabel->setObjectName(QStringLiteral("Oplabel"));
        Oplabel->setGeometry(QRect(20, 30, 521, 16));
        labelGo = new QLabel(centralWidget);
        labelGo->setObjectName(QStringLiteral("labelGo"));
        labelGo->setGeometry(QRect(30, 260, 71, 16));
        TakeMoney = new QPushButton(centralWidget);
        TakeMoney->setObjectName(QStringLiteral("TakeMoney"));
        TakeMoney->setEnabled(true);
        TakeMoney->setGeometry(QRect(584, 320, 191, 23));
        suicide = new QPushButton(centralWidget);
        suicide->setObjectName(QStringLiteral("suicide"));
        suicide->setEnabled(true);
        suicide->setGeometry(QRect(584, 350, 191, 23));
        labelItemsInCurrentRoom = new QLabel(centralWidget);
        labelItemsInCurrentRoom->setObjectName(QStringLiteral("labelItemsInCurrentRoom"));
        labelItemsInCurrentRoom->setGeometry(QRect(30, 130, 111, 16));
        listView_2 = new QListView(centralWidget);
        listView_2->setObjectName(QStringLiteral("listView_2"));
        listView_2->setGeometry(QRect(30, 160, 201, 91));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 795, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        Op1label->setText(QApplication::translate("MainWindow", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \320\272\320\276\320\274\320\275\320\260\321\202\321\213", 0));
        Op2label->setText(QApplication::translate("MainWindow", "\320\227\320\264\320\265\321\201\321\214 \320\261\321\203\320\264\320\265\321\202 \320\276\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\203\321\211\320\265\320\271 \320\272\320\276\320\274\320\275\320\260\321\202\321\213", 0));
        NorthButton->setText(QApplication::translate("MainWindow", "\320\241\320\265\320\262\320\265\321\200", 0));
        WestButton->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\277\320\260\320\264", 0));
        EastButton->setText(QApplication::translate("MainWindow", "\320\222\320\276\321\201\321\202\320\276\320\272", 0));
        SouthButton->setText(QApplication::translate("MainWindow", "\320\256\320\263", 0));
        labelInfo->setText(QApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \320\263\320\265\321\200\320\276\320\265", 0));
        Heroname->setText(QApplication::translate("MainWindow", "\320\230\320\274\321\217 \320\263\320\265\321\200\320\276\321\217", 0));
        labelHealth->setText(QApplication::translate("MainWindow", "\320\243\321\200\320\276\320\262\320\265\320\275\321\214 \320\267\320\264\320\276\321\200\320\276\320\262\321\214\321\217", 0));
        Money->setText(QApplication::translate("MainWindow", "50 \320\274\320\276\320\275\320\265\321\202", 0));
        labelItems->setText(QApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\277\321\200\320\265\320\264\320\274\320\265\321\202\320\276\320\262", 0));
        ShopButton->setText(QApplication::translate("MainWindow", "\320\232\321\203\320\277\320\270\321\202\321\214 \321\207\321\202\320\276-\320\275\320\270\320\261\321\203\320\264\321\214", 0));
        Oplabel->setText(QApplication::translate("MainWindow", "\320\227\320\264\320\265\321\201\321\214 \320\261\321\203\320\264\320\265\321\202 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\203\321\211\320\265\320\271 \320\272\320\276\320\274\320\275\320\260\321\202\321\213", 0));
        labelGo->setText(QApplication::translate("MainWindow", "\320\232\321\203\320\264\320\260 \320\270\320\264\321\202\320\270?", 0));
        TakeMoney->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\273\321\203\321\207\320\270\321\202\321\214 \320\274\320\276\320\275\320\265\321\202\321\213", 0));
        suicide->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\275\320\270\320\267\320\270\321\202\321\214 \320\267\320\264\320\276\321\200\320\276\320\262\321\214\320\265", 0));
        labelItemsInCurrentRoom->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202\321\213 \320\262 \320\272\320\276\320\274\320\275\320\260\321\202\320\265", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
