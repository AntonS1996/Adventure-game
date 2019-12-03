#include "monster.h"

void Monster::setHealth(int num)
{
    if (health+num<0)
        health=0;
    else
        health += num;
    // emit healthChanged(health);
}

void Monster::setRoom(int room)
{
    currentRoom=room;
}

void Monster::setDamage(int damage)
{
    damageLevel=damage;
}

void Monster::setShield(int shield)
{
    shieldLevel=shield;
}

void Monster::setStrikeProbability(int Probability)
{
    strikeProbability=Probability;
}
