#include "LevelScreen.h"

LevelScreen::LevelScreen(Game* newGamePointer)
	: Screen(newGamePointer)
	, testTexture()
	, testSprite()
{
	testTexture.loadFromFile("Assets/Graphics/PlayerStand.png");
	testSprite.setTexture(testTexture);
}

void LevelScreen::Update(sf::Time frameTime)
{
	// TODO: Update level objects!
}

void LevelScreen::DrawTo(sf::RenderTarget& target)
{
	// TODO: Draw level objects!
	target.draw(testSprite);
}
