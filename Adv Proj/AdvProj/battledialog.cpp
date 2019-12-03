#include "battledialog.h"
#include "ui_battledialog.h"
#include <QMessageBox>
#include "hero.h"
#include <ctime>
#include <QObject>

BattleDialog::BattleDialog(Battle* b, QWidget *parent)
   : battle(b), QDialog(parent),
    ui(new Ui::BattleDialog)
{
    ui->setupUi(this);
    SetNames();

    connect(battle, &Battle::battle_hit, this, &BattleDialog::battle_hit);
    QObject::connect(battle->hero, &Hero::hero_dead, this, &BattleDialog::accept);
    srand(time(0));
    if ((0+rand()%100)<battle->monster->strikeProbability)
        battle->attack(battle->hero, battle->monster, 0);
    ui->HeroHealth->setValue(battle->hero->health);
    ui->MonsterHealth->setValue(battle->monster->health);

}

BattleDialog::~BattleDialog()
{
    delete ui;
}

void BattleDialog::SetNames()
{
    // ui->MoneyInShop->setText(QString::number(hero->money)+" мон.");
    ui->labelHero->setText(battle->hero->name);
    ui->labelMonster->setText(battle->monster->name);
}

void BattleDialog::battle_hit(Hero *h, Monster *m, int damage, int i)
{
    ui->BattleInfo->setText("Произошёл удар");
    if (i==0)
    {
        ui->BattleInfo->setText(m->name+" нанёс герою "+QString::number(damage)+" урона.");
        ui->HeroHealth->setValue(h->health);
    }
    if (i==1)
    {
        ui->BattleInfo->setText("Герой нанёс "+m->name+" "+QString::number(damage)+" урона.");
        ui->MonsterHealth->setValue(m->health);
    }

}

void BattleDialog::on_buttonFight_clicked()
{
    battle->attack(battle->hero, battle->monster, 1);
    if (battle->monster->health==0)
    {
        QMessageBox *result=new QMessageBox;
        result->setWindowTitle("Результат боя");
        result->setText("Монстр убит");
        result->setDefaultButton(QMessageBox::Ok);
        result->exec();
        ui->buttonFight->setDisabled(true);
    delete result;
    }
    battle->attack(battle->hero, battle->monster, 0);
}

void BattleDialog::on_buttonEvade_clicked()
{
    accept();
}

