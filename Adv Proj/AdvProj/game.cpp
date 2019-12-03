#include "game.h"
#include "battle.h"

Game::Game(QString n, QList<shared_ptr<Item>> l, QObject *parent) : QObject(parent), maze(), hero(n, &maze), model(l), monster1("Призрак", &maze), monster2("Демон", &maze)
{
    hero.addItem(make_shared<Food>("Сэндвич", "Прибавка к здоровью 5", 5, 10, "food"));
    hero.addItem(make_shared<Food>("Кола", "Прибавка к здоровью 20", 20, 20, "food"));
    maze.rooms[2].putItem(make_shared<Food>("Сэндвич", "Прибавка к здоровью 5", 5, 10, "food"));
    maze.rooms[2].putItem(make_shared<Gold>("Монеты", "10 монет", 10, 10, "money"));
    maze.rooms[2].putItem(make_shared<Weapon>("Оружие", "20 урона", 20, 10, "weapon"));
    maze.rooms[2].putItem(make_shared<Shield>("Щит", "10 защиты", 10, 10, "shield"));
    maze.rooms[4].putItem(make_shared<Gold>("Монеты", "20 монет", 20, 20, "money"));
    monster1.setRoom(3);
    monster1.setDamage(30);
    monster1.setShield(5);
    monster1.setStrikeProbability(70);
    monster2.setRoom(5);
    monster2.setDamage(20);
    monster2.setShield(0);
    monster2.setStrikeProbability(100);
}

void Game::battle(Hero *h, Monster *m)
{
    Battle battle(h, m);
    emit battle_started(&battle);
}
