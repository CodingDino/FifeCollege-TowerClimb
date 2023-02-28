#include <SFML/Graphics.hpp>
#include "Game.h"
#include <stdlib.h>
#include <time.h> 
#include "AssetManager.h"

int main()
{
	// initialize random seed
	srand(time(NULL));

	// Create the game
	Game gameInstance;

	// This will not end until the game is over
	gameInstance.RunGameLoop();

	// If we get here, the loop exited, so end the program by returning
	// First clear all textures to avoid crash on exit due to SFML not liking static objects
	AssetManager::DestroyAllAssets();
	return 0;
}