#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Zombie {
private:
	// Speed for each zombie
	const float BLOATER_SPEED = 40;
	const float CHASER_SPEED = 80;
	const float CRAWLER_SPEED = 20;

	// How tough is each zombie
	const float BLOATER_HEALTH = 5;
	const float CHASER_HEALTH = 1;
	const float CRAWLER_HEALTH = 3;

	// Make each zombie vary its speed slightly
	const int MAX_VARIANCE = 30;
	const int OFFSET = 101 - MAX_VARIANCE;

	// Zombie's position
	Vector2f m_Position;

	// A sprite for the zombie
	Sprite m_Sprite;

	// Speed for this instance
	float m_Speed;

	// How much health
	float m_Health;

	// Alive Flag
	bool m_Alive;
public:
	bool hit(); // Handle when a bullet hits a zombie
	bool isAlive(); // Check if the zombie is still alive
	void spawn(float startX, float startY, int type, int seed); // spawn a new zombie
	FloatRect getPosition(); // Return a rectangle that is the position in the world
	Sprite getSprite(); // Get a copy of the sprite to draw
	void update(float elapsedTime, Vector2f playerLocation); // Update the zombie each frame
};