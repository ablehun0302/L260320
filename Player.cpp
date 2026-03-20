#include <iostream>
#include "Player.h"

Player::Player()
{
	X = 0;
	Y = 0;
	Health = 10;
	Damage = 3;
	Gold = 0;
}

Player::~Player()
{

}

void Player::Move()
{
	std::cout << "플레이어가 움직인다." << std::endl;
}

void Player::Attack()
{

}

void Player::Dead()
{

}

void Player::PickUp()
{

}