#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Bullet
{
private:
	Vector2f m_Position; // Position of the bullet
	RectangleShape m_BulletShape; // What each bullet looks like
	bool m_InFlight = false; // Is the bullet in flight?
	float m_BulletSpeed = 1000; // Bullet's speed
	float m_BulletDistanceX; // Fraction of 1 pixel bullet travels, 
	float m_BulletDistanceY; // horizontally and vertically
	float m_MaxX; // Boundaries so bullet doesn't fly forever
	float m_MinX;
	float m_MaxY;
	float m_MinY;

public:
	// Constructor
	Bullet();

	// Stop the bullet
	void stop();

	// Returns the value of m_InFlight
	bool isInFlight();

	// Launch a new bullet
	void shoot(float startX, float startY, float xTarget, float yTarget);

	// Find bullet position within the world
	FloatRect getPosition();

	// Return the actual shape (for drawing)
	RectangleShape getShape();

	// Update the bullet each frame
	void update(float elapsedTime);

};