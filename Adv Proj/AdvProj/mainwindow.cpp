#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QInputDialog>
#include <QListWidgetItem>
#include <shopwindow.h>
#include <battledialog.h>
#include <QObject>

MainWindow::MainWindow(Game *g, QWidget *parent) :
    game(g), QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Heroname->setText(game->hero.name);
    showMoney(game->hero.money);
    showHealth(game->hero.health);
    hideButton();
    connect(&game->hero, &Hero::moneyChanged, this, &MainWindow::showMoney);
    connect(&game->hero, &Hero::healthChanged, this, &MainWindow::showHealth);
    connect(game, &Game::battle_started, this, &MainWindow::battleStarted);
    QMessageBox* end_game;
    end_game = new QMessageBox;
    end_game->setWindowTitle("Конец игры");
    end_game->setText("Ваш герой умер");
    end_game->setDefaultButton(QMessageBox::Ok);
    QObject::connect(&game->hero, &Hero::heroDead, end_game, &QMessageBox::exec);
    QObject::connect(end_game, &QMessageBox::finished, this, &QMainWindow::close);
    // delete end_game;
    QMessageBox* end_game_win;
    end_game_win = new QMessageBox;
    end_game_win->setWindowTitle("Конец игры");
    end_game_win->setText("Вы победили");
    end_game_win->setDefaultButton(QMessageBox::Ok);
    QObject::connect(this, &MainWindow::victory, end_game_win, &QMessageBox::exec);
    QObject::connect(end_game_win, &QMessageBox::finished, this, &QMainWindow::close);
    // delete end_game_win;
    connect(&game->hero, &Hero::hero_moved, this, &MainWindow::enterRoom);

    ui->listView->setModel(&game->hero);
    ui->listView_2->setModel(&game->model);
    enterRoom(0);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::showMoney(int money)
{
    ui->Money->setText(QString::number(money)+" монет");
}

void MainWindow::showHealth(int health)
{
    ui->Health_of_hero->setValue(health);
}

void MainWindow::on_TakeMoney_clicked()
{
    game->hero.setMoney(10);
}

void MainWindow::on_suicide_clicked()
{
    game->hero.setHealth(-10);
}

void MainWindow::enterRoom(int room)
{
    ui->Oplabel->setText(game->maze[room].name);
    ui->Op2label->setText(game->maze[room].description);
    game->model.setItems(game->maze[room].items);
    if (room==game->monster1.currentRoom && game->monster1.health>0)
       game->battle(&game->hero, &game->monster1);
    if (room==game->monster2.currentRoom && game->monster2.health>0)
        game->battle(&game->hero, &game->monster2);
    if (room==6)
        emit victory();
}

void MainWindow::battleStarted(Battle *battle)
{
    BattleDialog b(battle);
    b.setWindowTitle("Сражение");
    if (battle->hero->health>0)
        b.exec();
}

void MainWindow::on_NorthButton_clicked()
{
    game->hero.move(Directions::North);
    hideButton();
}

void MainWindow::on_EastButton_clicked()
{
    game->hero.move(Directions::East);
    hideButton();
}

void MainWindow::on_WestButton_clicked()
{
    game->hero.move(Directions::West);
    hideButton();
}

void MainWindow::on_SouthButton_clicked()
{
    game->hero.move(Directions::South);
    hideButton();
}

void MainWindow::hideButton()
{
    if ((game->maze)[game->hero.currentRoom].neighbourRooms[Directions::North] == -1) ui->NorthButton->setDisabled(true);
    else ui->NorthButton->setEnabled(true);
    if ((game->maze)[game->hero.currentRoom].neighbourRooms[Directions::East] == -1) ui->EastButton->setDisabled(true);
    else ui->EastButton->setEnabled(true);
    if ((game->maze)[game->hero.currentRoom].neighbourRooms[Directions::West] == -1) ui->WestButton->setDisabled(true);
    else ui->WestButton->setEnabled(true);
    if ((game->maze)[game->hero.currentRoom].neighbourRooms[Directions::South] == -1) ui->SouthButton->setDisabled(true);
    else ui->SouthButton->setEnabled(true);
}



void MainWindow::on_ShopButton_clicked()
{
    ShopWindow s(&game->hero);
    s.setWindowTitle("Магазин");
    s.exec();
}

void MainWindow::on_listView_doubleClicked(const QModelIndex &index)
{

    game->hero.useItem(index);
}

void MainWindow::on_listView_2_doubleClicked(const QModelIndex &index)
{
    if (game->maze.rooms[game->hero.currentRoom].items[index.row()]->name=="Монеты")
        game->maze.rooms[game->hero.currentRoom].items[index.row()]->consume(&game->hero);
    else
        game->hero.addItem(game->maze.rooms[game->hero.currentRoom].items[index.row()]);
    game->model.takeItem(index);
    game->maze.rooms[game->hero.currentRoom].items=game->model.getItems();
}
