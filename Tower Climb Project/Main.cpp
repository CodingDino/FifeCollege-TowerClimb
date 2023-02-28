#include <SFML/Graphics.hpp>
#include "Game.h"
#include <stdlib.h>
#include <time.h> 

int main()
{
	// initialize random seed
	srand(time(NULL));

	// Create the game
	Game gameInstance;

	// This will not end until the game is over
	gameInstance.RunGameLoop();

	// If we get here, the loop exited, so end the program by returning
	return 0;
}