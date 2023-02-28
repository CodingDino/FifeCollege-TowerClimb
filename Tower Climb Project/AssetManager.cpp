#include "AssetManager.h"

std::map<std::string, sf::Texture> AssetManager::textures = std::map<std::string, sf::Texture>();
std::map<std::string, sf::Font> AssetManager::fonts = std::map<std::string, sf::Font>();
std::map<std::string, sf::SoundBuffer> AssetManager::soundBuffers = std::map<std::string, sf::SoundBuffer>();

sf::Texture& AssetManager::RequestTexture(std::string fileName)
{
	// Check if the asset is already loaded
	auto pairFound = textures.find(fileName);

	// If it is already loaded, return the existing asset
	if (pairFound != textures.end())
	{
		return pairFound->second;
	}
	// If it is not already loaded, load it and return the new asset
	else
	{
		sf::Texture& newTexture = textures[fileName];
		newTexture.loadFromFile(fileName);
		return newTexture;
	}
}

sf::SoundBuffer& AssetManager::RequestSoundBuffer(std::string fileName)
{
	// Check if the asset is already loaded
	auto pairFound = soundBuffers.find(fileName);

	// If it is already loaded, return the existing asset
	if (pairFound != soundBuffers.end())
	{
		return pairFound->second;
	}
	// If it is not already loaded, load it and return the new asset
	else
	{
		sf::SoundBuffer& newSoundBuffer = soundBuffers[fileName];
		newSoundBuffer.loadFromFile(fileName);
		return newSoundBuffer;
	}
}

sf::Font& AssetManager::RequestFont(std::string fileName)
{
	// Check if the asset is already loaded
	auto pairFound = fonts.find(fileName);

	// If it is already loaded, return the existing asset
	if (pairFound != fonts.end())
	{
		return pairFound->second;
	}
	// If it is not already loaded, load it and return the new asset
	else
	{
		sf::Font& newFont = fonts[fileName];
		newFont.loadFromFile(fileName);
		return newFont;
	}
}

void AssetManager::DestroyAllAssets()
{
	textures.clear();
	soundBuffers.clear();
	fonts.clear();
}
