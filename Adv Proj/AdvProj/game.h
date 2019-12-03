#ifndef GAME_H
#define GAME_H

#include <maze.h>
#include <shopwindow.h>
#include "monster.h"
#include "battle.h"

class Game : public QObject
{
    Q_OBJECT

public:
    explicit Game(QString n, QList<shared_ptr<Item>> l, QObject *parent = 0);

    Hero hero;
    Maze maze;
    RoomModel model;
    Monster monster1, monster2;

    void battle(Hero *h, Monster *m);

signals:
    void battle_started(Battle *battle);

};

#endif // GAME_H
