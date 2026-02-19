#include "Credits.h"

Credits::Credits(sf::RenderWindow& window, Input& input, GameState& gameState) :
	BaseLevel(window, input, gameState), m_prompt(m_font), m_myName(m_font)
{
	if (!m_font.openFromFile("font/arial.ttf")) std::cerr << "no font";
	m_prompt.setFont(m_font);
	m_myName.setFont(m_font);

	m_myName.setString("Made by William Kavanagh");
	m_myName.setCharacterSize(24);
	m_myName.setPosition({ 200,0 });

	m_prompt.setString("Press space to play again");
	m_prompt.setCharacterSize(24);
	m_prompt.setPosition({ 200,300 });
}

void Credits::handleInput(float dt)
{
	if (m_input.isPressed(sf::Keyboard::Scancode::Space))
	{
		m_gameState.setCurrentState(State::LEVEL);
	}
}

void Credits::update(float dt)
{
	// does nothing
}

void Credits::render()
{
	beginDraw();
	m_window.draw(m_myName);
	m_window.draw(m_prompt);
	endDraw();
}
