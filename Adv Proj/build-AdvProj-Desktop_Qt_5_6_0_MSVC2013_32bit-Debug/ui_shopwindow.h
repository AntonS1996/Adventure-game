/********************************************************************************
** Form generated from reading UI file 'shopwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPWINDOW_H
#define UI_SHOPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ShopWindow
{
public:
    QLabel *labelMoney;
    QLabel *MoneyInShop;
    QListView *ShopView;
    QPushButton *BuyButton;
    QPushButton *closeButton;

    void setupUi(QDialog *ShopWindow)
    {
        if (ShopWindow->objectName().isEmpty())
            ShopWindow->setObjectName(QStringLiteral("ShopWindow"));
        ShopWindow->resize(400, 300);
        labelMoney = new QLabel(ShopWindow);
        labelMoney->setObjectName(QStringLiteral("labelMoney"));
        labelMoney->setGeometry(QRect(20, 20, 81, 16));
        MoneyInShop = new QLabel(ShopWindow);
        MoneyInShop->setObjectName(QStringLiteral("MoneyInShop"));
        MoneyInShop->setGeometry(QRect(20, 40, 71, 16));
        ShopView = new QListView(ShopWindow);
        ShopView->setObjectName(QStringLiteral("ShopView"));
        ShopView->setGeometry(QRect(20, 60, 256, 192));
        BuyButton = new QPushButton(ShopWindow);
        BuyButton->setObjectName(QStringLiteral("BuyButton"));
        BuyButton->setGeometry(QRect(20, 260, 75, 23));
        closeButton = new QPushButton(ShopWindow);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(200, 260, 75, 23));

        retranslateUi(ShopWindow);

        QMetaObject::connectSlotsByName(ShopWindow);
    } // setupUi

    void retranslateUi(QDialog *ShopWindow)
    {
        ShopWindow->setWindowTitle(QApplication::translate("ShopWindow", "Dialog", 0));
        labelMoney->setText(QApplication::translate("ShopWindow", "\320\224\320\265\320\275\321\214\320\263\320\270", 0));
        MoneyInShop->setText(QApplication::translate("ShopWindow", "50 \320\274\320\276\320\275\320\265\321\202", 0));
        BuyButton->setText(QApplication::translate("ShopWindow", "\320\232\321\203\320\277\320\270\321\202\321\214", 0));
        closeButton->setText(QApplication::translate("ShopWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class ShopWindow: public Ui_ShopWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPWINDOW_H
