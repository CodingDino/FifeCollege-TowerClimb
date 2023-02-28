#include "LevelScreen.h"

LevelScreen::LevelScreen(Game* newGamePointer)
	: Screen(newGamePointer)
	, playerObject()
	, platformObject()
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
	platformObject.DrawTo(target);
}
