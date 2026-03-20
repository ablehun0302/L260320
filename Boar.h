#pragma once
#include <iostream>
#include "Monster.h"

class Boar : public Monster
{
public:
	Boar();
	~Boar();

	std::string Name = "Boar";
};

