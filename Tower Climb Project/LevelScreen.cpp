#include "LevelScreen.h"

LevelScreen::LevelScreen(Game* newGamePointer)
	: Screen(newGamePointer)
	, playerObject()
{
}

void LevelScreen::Update(sf::Time frameTime)
{
	// TODO: Update level objects!
}

void LevelScreen::DrawTo(sf::RenderTarget& target)
{
	// TODO: Draw level objects!
	playerObject.DrawTo(target);
}
