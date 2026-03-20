#include <iostream>
#include "Engine.h"
#include "World.h"

using namespace std;

int main()
{
	Engine MyEngine;

	/*
	World* CurrentWorld = MyEngine.WorldInstance;
	Player* CurrentPlayer = CurrentWorld->MyPlayer;
	Monster* CurrentMonster = CurrentWorld->MyMonster;

	CurrentPlayer->Move();
	CurrentMonster->Move();*/

	MyEngine.WorldInstance->MyPlayer->Move();
	MyEngine.WorldInstance->Monsters[0]->Move();
	MyEngine.WorldInstance->Monsters[1]->Move();
	MyEngine.WorldInstance->Monsters[2]->Move();

	return 0;
}