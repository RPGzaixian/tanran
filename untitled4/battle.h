// battle.h
#ifndef BATTLE_H
#define BATTLE_H

#include "character.h"
#include "skill.h"

class Battle
{
public:
    Battle(Character *player, Character *enemy);
    void attack();
    void useSkill(Skill *skill);
    bool gameover();

    Character *player;
    Character *enemy;
};

#endif // BATTLE_H
