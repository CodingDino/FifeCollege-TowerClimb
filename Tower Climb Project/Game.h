#pragma once
#include <SFML/Graphics.hpp>
#include "Screen.h"

class Game
{
public:
	Game();

	void RunGameLoop();

	void EventHandling();
	void Update();
	void Draw();

	sf::RenderWindow& GetWindow();

private:
	sf::RenderWindow window;
	sf::Clock gameClock;

	Screen* currentScreen;
};

