#ifndef MAZE_H
#define MAZE_H

#include <room.h>
#include <QList>

class Maze
{
    // QList<Room> rooms;
public:
    explicit Maze();
    QList<Room> rooms;

    void Init();
    Room& operator [](int index){
        return rooms[index];
    }
};

#endif // MAZE_H
