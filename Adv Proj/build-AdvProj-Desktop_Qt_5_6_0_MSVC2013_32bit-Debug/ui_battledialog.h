/********************************************************************************
** Form generated from reading UI file 'battledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATTLEDIALOG_H
#define UI_BATTLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_BattleDialog
{
public:
    QLabel *labelHero;
    QLabel *labelMonster;
    QProgressBar *HeroHealth;
    QProgressBar *MonsterHealth;
    QPushButton *buttonFight;
    QPushButton *buttonEvade;
    QLabel *BattleInfo;

    void setupUi(QDialog *BattleDialog)
    {
        if (BattleDialog->objectName().isEmpty())
            BattleDialog->setObjectName(QStringLiteral("BattleDialog"));
        BattleDialog->setWindowModality(Qt::NonModal);
        BattleDialog->resize(400, 300);
        labelHero = new QLabel(BattleDialog);
        labelHero->setObjectName(QStringLiteral("labelHero"));
        labelHero->setGeometry(QRect(60, 50, 47, 13));
        labelMonster = new QLabel(BattleDialog);
        labelMonster->setObjectName(QStringLiteral("labelMonster"));
        labelMonster->setGeometry(QRect(260, 50, 47, 13));
        HeroHealth = new QProgressBar(BattleDialog);
        HeroHealth->setObjectName(QStringLiteral("HeroHealth"));
        HeroHealth->setGeometry(QRect(40, 80, 118, 23));
        HeroHealth->setValue(100);
        MonsterHealth = new QProgressBar(BattleDialog);
        MonsterHealth->setObjectName(QStringLiteral("MonsterHealth"));
        MonsterHealth->setGeometry(QRect(240, 80, 118, 23));
        MonsterHealth->setValue(100);
        buttonFight = new QPushButton(BattleDialog);
        buttonFight->setObjectName(QStringLiteral("buttonFight"));
        buttonFight->setGeometry(QRect(60, 200, 75, 23));
        buttonEvade = new QPushButton(BattleDialog);
        buttonEvade->setObjectName(QStringLiteral("buttonEvade"));
        buttonEvade->setGeometry(QRect(250, 200, 75, 23));
        BattleInfo = new QLabel(BattleDialog);
        BattleInfo->setObjectName(QStringLiteral("BattleInfo"));
        BattleInfo->setGeometry(QRect(70, 140, 271, 21));

        retranslateUi(BattleDialog);

        QMetaObject::connectSlotsByName(BattleDialog);
    } // setupUi

    void retranslateUi(QDialog *BattleDialog)
    {
        BattleDialog->setWindowTitle(QApplication::translate("BattleDialog", "Dialog", 0));
        labelHero->setText(QApplication::translate("BattleDialog", "TextLabel", 0));
        labelMonster->setText(QApplication::translate("BattleDialog", "TextLabel", 0));
        buttonFight->setText(QApplication::translate("BattleDialog", "\320\241\321\200\320\260\320\266\320\260\321\202\321\214\321\201\321\217", 0));
        buttonEvade->setText(QApplication::translate("BattleDialog", "\320\241\320\261\320\265\320\266\320\260\321\202\321\214", 0));
        BattleInfo->setText(QApplication::translate("BattleDialog", "\320\222 \320\272\320\276\320\274\320\275\320\260\321\202\320\265 \320\274\320\276\320\275\321\201\321\202\321\200. \320\234\320\276\320\266\320\275\320\276 \320\277\320\276\320\277\321\200\320\276\320\261\320\276\320\262\320\260\321\202\321\214 \321\201\321\200\320\260\320\267\320\270\321\202\321\214\321\201\321\217", 0));
    } // retranslateUi

};

namespace Ui {
    class BattleDialog: public Ui_BattleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTLEDIALOG_H
