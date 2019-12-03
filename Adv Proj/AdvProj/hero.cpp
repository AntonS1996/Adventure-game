#include "hero.h"

void Hero::setMoney(int num)
{
    money += num;
    emit moneyChanged(money);
}

void Hero::setHealth(int num)
{
    health += num;
    if (health <= 0)
    {
        this->healthChanged(0);
        emit heroDead();
        emit hero_dead();
    }
    else
        emit healthChanged(health);

}

void Hero::move(Directions direction)
{
    currentRoom = (*maze)[currentRoom].neighbourRooms[direction];
    emit hero_moved(currentRoom);
}

void Hero::addItem(shared_ptr<Item> items)
{
    beginResetModel();
    inventory.append(items);
    endResetModel();
    //emit inventory_changed(inventory);
}

QVariant Hero::data(const QModelIndex &index, int role) const
{
    if(role == Qt::DisplayRole)
        return inventory[index.row()]->name;
    if(role == Qt::ToolTipRole)
        return inventory[index.row()]->description;
    return QVariant();

}


int Hero::rowCount(const QModelIndex &parent) const
{
    return inventory.size();
}

void Hero::useItem(const QModelIndex index)
{
    this->inventory[index.row()]->consume(this);
    beginResetModel();
    if (this->inventory[index.row()]->useOnce() == true)
    inventory.removeAt(index.row());
    endResetModel();
}

bool Hero::checkMoney(int num)
{
    if (money-num<0) return false;
    return true;
}

int Hero::getDamage()
{
    int damage=0;
    QList<shared_ptr<Item>> items=this->getItems();
    for (int i=0; i<items.size(); i++)
        if (items[i]->type=="weapon")
            if (damage<items[i]->getDamage())
                damage=items[i]->getDamage();
    return damage;
}

int Hero::getShield()
{
    int shield=0;
    QList<shared_ptr<Item>> items=this->getItems();
    for (int i=0; i<items.size(); i++)
        if (items[i]->type=="shield")
            if (shield<items[i]->getShield())
                shield=items[i]->getShield();
    return shield;
}




