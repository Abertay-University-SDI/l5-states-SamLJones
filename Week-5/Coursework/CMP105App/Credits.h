#pragma once
#include "Framework/BaseLevel.h"
class Credits :
    public BaseLevel
{
public:
    Credits(sf::RenderWindow& window, Input& input, GameState& gameState);
    void handleInput(float dt) override;
    void update(float dt) override;
    void render() override;
private:
    sf::Font m_font;
    sf::Text m_myName;
    sf::Text m_prompt;
};

