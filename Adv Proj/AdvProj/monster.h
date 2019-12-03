#ifndef MONSTER_H
#define MONSTER_H

#include <maze.h>
#include <QObject>
#include <memory>
#include <item.h>
#include <QList>
#include <QAbstractListModel>

using namespace std;

class Monster : public QObject
{
    Q_OBJECT

public:
    Monster();
    QString name;
    Maze *maze;
    int currentRoom;
    int health;
    int damageLevel;
    int shieldLevel;
    int strikeProbability;
    explicit Monster(QString n, Maze* m, QObject *parent = 0) :
        QObject(parent), health(100), maze(m), name(n), currentRoom(0){};
    void setRoom(int room);
    void setHealth(int num);
    void setDamage(int damage);
    void setShield(int shield);
    void setStrikeProbability(int Probability);

signals:
    void monsterDead();
    // void healthChanged(int health);

};


#endif // MONSTER_H
