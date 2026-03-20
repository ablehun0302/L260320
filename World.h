#pragma once
#include "Player.h"
#include "Monster.h"

class World
{
public:
	World();
	~World();

	Player* MyPlayer;
	Monster* Monsters[3];
};