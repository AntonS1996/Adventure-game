#ifndef ITEM_H
#define ITEM_H

#include <QString>

class Hero;
class Game;
class RoomModel;

class Item
{
public:
    Item(QString nameItem, QString descriptionItem, int costItem, QString typeItem) : name(nameItem), description(descriptionItem), cost(costItem), type(typeItem){}
    virtual ~Item() {}
    QString name;
    QString description;
    int cost;
    QString type;
    QString getName() {return name;}
    QString getDescription() {return description;}
    virtual void consume(Hero * hero);
    virtual bool useOnce() {return false;}
    virtual int getDamage() {return 0;}
    virtual int getShield() {return 0;}

};

class Food : public Item
{
public:
    Food(QString nameItem, QString descriptionItem, int count, int costItem, QString typeItem) : Item(nameItem, descriptionItem, costItem, typeItem), countHeal(count){}
    int countHeal;
    bool useOnce() {return true;}
    void consume(Hero * hero);
};

class Gold : public Item
{
public:
    Gold(QString nameItem, QString descriptionItem, int amount, int costItem, QString typeItem) : Item(nameItem, descriptionItem, costItem, typeItem), Cost(amount){}
    int Cost;
    void consume(Hero * hero);
};

class Weapon : public Item
{
public:
    Weapon(QString nameItem, QString descriptionItem, int damage, int costItem, QString typeItem) : Item(nameItem, descriptionItem, costItem, typeItem), damageLevel(damage){}
    int damageLevel;
    int getDamage();
};

class Shield : public Item
{
public:
    Shield(QString nameItem, QString descriptionItem, int shield, int costItem, QString typeItem) : Item(nameItem, descriptionItem, costItem, typeItem), shieldLevel(shield){}
    int shieldLevel;
    int getShield();
};




#endif // ITEM_H
