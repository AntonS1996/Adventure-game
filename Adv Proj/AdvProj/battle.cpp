#include "battle.h"
#include "hero.h"
#include <ctime>

void Battle::hero_attack()
{
    // int d=hitDamage(hero->getDamage(), monster->shieldLevel);
    int d=hitDamage(hero->getDamage(), 0);
    monster->setHealth(-d);
    emit battle_hit(hero, monster, d, 1);

}

void Battle::monster_attack()
{
    int d=hitDamage(monster->damageLevel, hero->getShield());
    hero->setHealth(-d);
    if (hero->health<=0)
    {
        emit heroDead();
    }
    else
        emit battle_hit(hero, monster, d, 0);

}

int Battle::hitDamage(int hitLevel, int shieldLevel)
{
    int maxDamage;
    maxDamage=hitLevel-shieldLevel;
    if (maxDamage<0)
        maxDamage=0;
    srand(time(0));
    int damage=0+rand()%(maxDamage+1);
    return damage;
}

void Battle::attack(Hero *h, Monster *m, int i)
{
    if (i==0)
    {
        monster_attack();
        // i++;
    }
    if (i==1)
    {
        hero_attack();
        // i--;
    }
}
