#pragma once
class Monster
{
public:
	Monster();
	~Monster();

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

