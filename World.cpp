#include "World.h"
#include "Player.h"
#include "Boar.h"
#include "Slime.h"
#include "Goblin.h"

World::World()
{
	MyPlayer = new Player();
	Monsters[0] = new Boar();
	Monsters[1] = new Slime();
	Monsters[2] = new Goblin();
}

World::~World()
{
	delete MyPlayer;
	for (int i = 0; i < 3; ++i)
	{
		delete Monsters[i];
	}
}
