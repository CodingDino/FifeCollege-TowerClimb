#include "SpriteObject.h"
#include "AssetManager.h"

SpriteObject::SpriteObject(std::string newTextureName)
	: sprite(AssetManager::RequestTexture(newTextureName))
{
}

void SpriteObject::DrawTo(sf::RenderTarget& target)
{
	target.draw(sprite);
}

sf::FloatRect SpriteObject::GetHitbox()
{
	return sprite.getGlobalBounds();
}