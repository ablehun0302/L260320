#include <iostream>
#include "Monster.h"

Monster::Monster()
{
	X = 0;
	Y = 0;
	Health = 10;
	Damage = 2;
	Gold = 3;
}

Monster::~Monster()
{
}

void Monster::Move()
{
	std::cout << Name << "(이)가 움직인다." << std::endl;
}

void Monster::Attack()
{
}

void Monster::Dead()
{
}

void Monster::DropGold()
{
}
