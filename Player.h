#pragma once

class Monster;

class Player
{
public:
	Player();
	~Player();

	int X;
	int Y;
	int Health;
	int Damage;
	int Gold;

	void Move();
	void Attack();
	void Dead();
	void PickUp();
};

