// character.cpp
#include "character.h"

Character::Character(QString name, int health, int attack,int MP)
{
    this->name = name;
    this->health = health;
    this->att = attack;
    this->MP = MP;
    this->initial_health = health;
    this->initial_MP = MP;
}

void Character::takeDamage(int damage)
{
    if(health>=damage)
    {
       health -= damage;
    }

    else {
        health = 0;
    }
}

void Character::attack(Character *target)
{
    target->takeDamage(att);
}

void Character::takeMP(int MP_needed)
{
    if(MP>=MP_needed)
    {
        MP -= MP_needed;
    }

    else MP = 0;
}

float Character::HP_percent()
{
    float ans;
    ans = (float)health/initial_health;
    return ans;
}

float Character::MP_percent()
{
    float ans;
    ans = (float)MP/initial_MP;
    return ans;
}

void Character::MP_recovery()
{
    if(MP<initial_MP)
    {
        if(MP+20>=initial_MP)
        {
            MP = initial_MP;
        }

        else {
            MP += 20;
        }
    }
}
