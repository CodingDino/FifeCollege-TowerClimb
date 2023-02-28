#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <map>

class AssetManager
{
public:

	// Functions to get assets
	static sf::Texture& RequestTexture(std::string fileName);
	static sf::SoundBuffer& RequestSoundBuffer(std::string fileName);
	static sf::Font& RequestFont(std::string fileName);

	static void DestroyAllAssets();

private:

	// Static Data
	static std::map<std::string, sf::Texture> textures;
	static std::map<std::string, sf::SoundBuffer> soundBuffers;
	static std::map<std::string, sf::Font> fonts;

};

