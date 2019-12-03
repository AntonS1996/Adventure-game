#ifndef BATTLE_H
#define BATTLE_H

#include <QObject>
#include <maze.h>
#include "monster.h"
#include <QObject>
#include <memory>
#include <item.h>
#include <QList>

class Battle : public QObject
{
    Q_OBJECT

public:
    Battle();
    Hero *hero;
    Monster *monster;
    explicit Battle(Hero *h, Monster *m, QObject *parent = 0) :
        QObject(parent), hero(h), monster(m){};
    // int i=0;
    int hitDamage(int hitLevel, int shieldLevel);
    void attack(Hero *h, Monster *m, int i);

signals:
    void battle_hit(Hero *h, Monster *m, int damage, int i);
    void heroDead();
    // void battle_hit_hero(Hero *from, Monster *to, int damage);

public slots:
     void hero_attack();
     void monster_attack();

};

#endif // BATTLE_H
