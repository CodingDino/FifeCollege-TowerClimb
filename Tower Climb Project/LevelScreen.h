#pragma once
#include "Screen.h"

class Game;

class LevelScreen :
    public Screen
{
public:
    LevelScreen(Game* newGamePointer);

    void Update(sf::Time frameTime) override;
    void DrawTo(sf::RenderTarget& target) override;

private:



};

