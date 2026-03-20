#include <iostream>
#include "Engine.h"
#include "Player.h"
#include "WildBoar.h"
#include "Goblin.h"
#include "Slime.h"

using namespace std;

int main()
{
	srand(time(nullptr));

	AWildBoar* WildBoar = nullptr;
	AGoblin* Goblin = nullptr;
	ASlime* Slime = nullptr;

	int WildBoarCount = rand() % 10 + 1;
	int GoblinCount = rand() % 10 + 1;
	int SlimeCount = rand() % 10 + 1;

	WildBoar = new AWildBoar[WildBoarCount];
	Goblin = new AGoblin[GoblinCount];
	Slime = new ASlime[SlimeCount];

	for (int i = 0; i < WildBoarCount; i++)
	{
		WildBoar[i].Move();
	}

	for (int i = 0; i < GoblinCount; i++)
	{
		Goblin[i].Move();
	}

	for (int i = 0; i < SlimeCount; i++)
	{
		Slime[i].Move();
	}

	delete[] WildBoar;
	delete[] Goblin;
	delete[] Slime;

	return 0;
}