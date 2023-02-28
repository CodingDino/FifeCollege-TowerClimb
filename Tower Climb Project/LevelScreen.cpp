#include "LevelScreen.h"

LevelScreen::LevelScreen(Game* newGamePointer)
	: Screen(newGamePointer)
	, testSpriteObject("Assets/Graphics/PlayerStand.png")
{
}

void LevelScreen::Update(sf::Time frameTime)
{
	// TODO: Update level objects!
}

void LevelScreen::DrawTo(sf::RenderTarget& target)
{
	// TODO: Draw level objects!
	testSpriteObject.DrawTo(target);
}
