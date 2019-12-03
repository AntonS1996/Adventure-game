#ifndef BATTLEDIALOG_H
#define BATTLEDIALOG_H

#include <QDialog>
#include <mainwindow.h>
#include <QObject>
#include <memory>
#include <item.h>
#include <QList>

using namespace std;

namespace Ui {
class BattleDialog;
}

class BattleDialog : public QDialog
{
    Q_OBJECT

public:
    Battle* battle;
    explicit BattleDialog(Battle* b,QWidget *parent = 0);
    void SetNames();
    ~BattleDialog();

private:
    Ui::BattleDialog *ui;

signals:
    void attack();

private slots:
    void battle_hit(Hero *h, Monster *m, int damage, int i);
    void on_buttonFight_clicked();
    void on_buttonEvade_clicked();

};

#endif // BATTLEDIALOG_H
