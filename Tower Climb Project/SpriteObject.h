#pragma once
#include <SFML/Graphics.hpp>

class SpriteObject
{
public:

	// Constructors / Destructors
	SpriteObject(std::string newTextureName);

	// Functions
	void DrawTo(sf::RenderTarget& target);
	sf::FloatRect GetHitbox();

	sf::Vector2f CalculateCollisionDepth(sf::FloatRect otherHitbox);

protected:

	// Data
	sf::Sprite sprite;
};

