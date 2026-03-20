#include "Engine.h"
#include "World.h"

Engine::Engine()
{
	WorldInstance = new World();
}

Engine::~Engine()
{
	delete WorldInstance;
}
