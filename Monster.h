#pragma once
#include <iostream>

class Monster
{
public:
	Monster();
	~Monster();

	std::string Name;
	int X;
	int Y;
	int Health;
	int Damage;
	int Gold;

	void Move();
	void Attack();
	void Dead();
	void DropGold();
};

