#include "item.h"
#include "hero.h"

void Item::consume(Hero *hero)
{

}

void Food::consume(Hero *hero)
{
    hero->setHealth(countHeal);
}

void Gold::consume(Hero *hero)
{
    hero->setMoney(Cost);
}

int Weapon::getDamage()
{
    return damageLevel;
}

int Shield::getShield()
{
    return shieldLevel;
}
