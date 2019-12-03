#ifndef HERO_H
#define HERO_H

#include <maze.h>
#include <QObject>
#include <memory>
#include <item.h>
#include <QList>
#include <QAbstractListModel>

using namespace std;

class Hero : public QAbstractListModel
{
    Q_OBJECT

public:
    Hero();
    QString name;
    Maze *maze;
    int currentRoom;
    int health;
    int money;
    QList<shared_ptr<Item>> inventory;
    explicit Hero(QString n, Maze* m, QObject *parent = 0) :
        QAbstractListModel(parent), health(100), maze(m), money(50), name(n), currentRoom(0){};
    void setMoney(int num);
    void setHealth(int num);
    void addItem(shared_ptr<Item>);
    int getMoney() {return money;}
    QList<shared_ptr<Item>> getItems() {return inventory;};
    int getDamage();
    int getShield();
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role) const;
    //void useItem(int index);
    bool checkMoney(int num);

signals:
    void heroDead();
    void hero_dead();
    void moneyChanged(int money);
    void healthChanged(int health);
    void hero_moved(int room);
    void inventory_changed(QList<shared_ptr<Item>> items);
    // void victory();

public slots:
    void move(Directions direction);
    void useItem(const QModelIndex index);

};

#endif // HERO_H
