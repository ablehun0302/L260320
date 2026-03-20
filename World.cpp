#include "World.h"
#include "Player.h"
#include "Boar.h"

World::World()
{
	MyPlayer = new Player();
	MyMonster = new Boar();
}

World::~World()
{
	delete MyPlayer;
	delete[] MyMonster;
}
