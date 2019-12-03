#include "room.h"

Room::Room()
{}

void Room::putItem(shared_ptr<Item> item)
{
    items.append(item);
}

QList<shared_ptr<Item>> Room::visibleItems(Hero *hero)
{
    return items;
}

shared_ptr<Item> Room::peekItem(int index)
{
    shared_ptr<Item> item=items[index];
    items.removeAt(index);
    return item;
}


void RoomModel::setItems(QList<shared_ptr<Item>> itms)
{
    beginResetModel();
    itemsInCurrentRoom=itms;
    endResetModel();
}

QVariant RoomModel::data(const QModelIndex &index, int role) const
{
    if(role == Qt::DisplayRole)
        return itemsInCurrentRoom[index.row()]->name;
    if(role == Qt::ToolTipRole)
        return itemsInCurrentRoom[index.row()]->description;
    return QVariant();

}

int RoomModel::rowCount(const QModelIndex &parent) const
{
    return itemsInCurrentRoom.size();
}

void RoomModel::takeItem(const QModelIndex index)
{
    beginResetModel();
    itemsInCurrentRoom.removeAt(index.row());
    endResetModel();
}




