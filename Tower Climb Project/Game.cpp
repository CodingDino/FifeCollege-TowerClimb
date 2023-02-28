#include "Game.h"
#include "LevelScreen.h"

Game::Game()
	: window(sf::VideoMode::getDesktopMode(), "Bunny Hop", sf::Style::Titlebar | sf::Style::Close)
	, gameClock()
	, currentScreen(nullptr)
{
	// Window setup
	window.setMouseCursorVisible(false);

	// TODO: Setup screens
	currentScreen = new LevelScreen(this);
}


void Game::RunGameLoop()
{
	// Repeat as long as the window is open
	while (window.isOpen())
	{
		EventHandling();
		Update();
		Draw();
	}
}


void Game::EventHandling()
{
	sf::Event event;
	while (window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			window.close();
		}

		// Close game if escape is pressed
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			window.close();
		}
	}

}


void Game::Update()
{
	sf::Time frameTime = gameClock.restart();

	// Update current screen
	if (currentScreen != nullptr)
		currentScreen->Update(frameTime);

	// TODO: Handle change to other screens
}


void Game::Draw()
{
	window.clear();

	// Draw current screen
	if (currentScreen != nullptr)
		currentScreen->DrawTo(window);

	window.display();
}


sf::RenderWindow& Game::GetWindow()
{
	return window;
}