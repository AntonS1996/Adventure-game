#ifndef ROOM_H
#define ROOM_H

#include <QMap>
#include <QList>
#include <QObject>
#include "item.h"
#include <memory>
#include <QAbstractListModel>

using namespace std;

enum class  Directions{North=0, East, South, West};

class RoomModel : public QAbstractListModel
{
    Q_OBJECT

public:
    RoomModel();
    QList<shared_ptr<Item>> itemsInCurrentRoom;
    explicit RoomModel(QList<shared_ptr<Item>> Items, QObject *parent = 0) :
        QAbstractListModel(parent), itemsInCurrentRoom(Items){};
    QList<shared_ptr<Item>> getItems() {return itemsInCurrentRoom;};
    void setItems(QList<shared_ptr<Item>> itms);
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role) const;

signals:
    void itemset_changed(QList<shared_ptr<Item>> itm);

public slots:
    void takeItem(const QModelIndex index);

};


class Room
{

public:

    explicit Room();
    QString name; // Название комнаты.
    QString description; // Описание комнаты.
    QMap<Directions,int> neighbourRooms; // Номера соседних комнат.
    QList<shared_ptr<Item>> items;

    Room(QString roomName, QString roomDescr, int n, int e, int s, int w):name(roomName), description(roomDescr)
    {
        neighbourRooms[Directions::North]=n;
        neighbourRooms[Directions::East]=e;
        neighbourRooms[Directions::South]=s;
        neighbourRooms[Directions::West]=w;
    }

    void putItem(shared_ptr<Item> item);
    QList<shared_ptr<Item>> visibleItems(Hero *hero);
    shared_ptr<Item> peekItem(int index);


};

#endif // ROOM_H
