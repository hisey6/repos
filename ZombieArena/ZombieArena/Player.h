#pragma once
#include <SFML/Graphics.hpp>;

using namespace sf;

class Player 
{
private: // Private variables
	const float START_SPEED = 200;
	const float START_HEALTH = 100;

	Vector2f m_Position; // Position of the player
	Sprite m_Sprite; // Create a Sprite
	Texture m_Texture; // Add a Texture
	Vector2f m_Resolution; // Screen Resolution
	IntRect m_Arena; // Arena Size
	int m_TileSize; // Tile Size
	bool m_UpPressed, m_DownPressed; // Direction player is currently moving in
	bool m_LeftPressed;
	bool m_RightPressed;
	int m_Health; // Player's health;
	int m_MaxHealth; // Player's maximum health;
	Time m_lastHit; // Time when player was last hit
	float m_Speed; // Speed in pixels per second

public: // Public methods
	Player(); // constructor

	void spawn(IntRect arena, Vector2f resolution, int TileSize);
	void resetPlayerStats(); // Called at the end of the game
	bool hit(Time timeHit); // Hande the player getting hit by a zombie
	Time getLastTime(); // Find when the player was last hit
	FloatRect getPosition(); // Find the player's position
	Vector2f getCenter(); // Find the center of the player
	float getRotation(); // Find the angle the player is facing
	Sprite getSprite(); // Send a copy of Sprite to main
	void moveLeft(); // move left
	void moveRight(); // move right
	void moveUp(); // move up
	void moveDown(); // move down
	void stopLeft(); // stop left
	void stopRight(); // stop right
	void stopUp(); // stop up
	void stopDown(); // stop down

	void update(float elapsedTime, Vector2i mousePosition); // method called once a frame
	 
	void upgradeSpeed(); // Speed Boost
	void upgradeHealth(); // Health Boost
	void increaseHealthLevel(int amount); // Increase max amount of health
	int getHealth(); // Current Health Level
};