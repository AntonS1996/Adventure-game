#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "hero.h"
#include "monster.h"
#include "battle.h"
#include <QString>
#include <game.h>
#include <memory>
#include <item.h>
#include <QList>

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(Game* g, QWidget *parent = 0);
    ~MainWindow();
    void hideButton();
    Game *game;

private:
    Ui::MainWindow *ui;

signals:
    void victory();

private slots:

    void showMoney(int money);
    void showHealth(int health);
    void on_TakeMoney_clicked();
    void on_suicide_clicked();
    void enterRoom(int room);
    void battleStarted(Battle *battle);

    void on_NorthButton_clicked();

    void on_EastButton_clicked();

    void on_WestButton_clicked();

    void on_SouthButton_clicked();

    void on_ShopButton_clicked();

    void on_listView_doubleClicked(const QModelIndex &index);

    void on_listView_2_doubleClicked(const QModelIndex &index);

};

#endif // MAINWINDOW_H



