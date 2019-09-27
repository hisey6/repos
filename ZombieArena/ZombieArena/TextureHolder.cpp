#include "pch.h";
#include "TextureHolder.h";
// Include the "assert" feature
#include <assert.h>;
TextureHolder* TextureHolder::m_s_Instance = nullptr;
TextureHolder::TextureHolder()
{
	assert(m_s_Instance == nullptr);
	m_s_Instance = this;
}

sf::Texture& TextureHolder::GetTexture(std::string const& filename)
{
	// Get a reference to m_Textures using m_s_Instance
	auto& m = m_s_Instance->m_Textures;

	// Create an iterator to hold a key-value pair and search for the requried kvp using
	// the passed file name
	auto keyValuePair = m.find(filename);

	// Check if a match is found
	if (keyValuePair != m.end())
	{
		// Return the texture
		return keyValuePair->second;
	}
	else {
		// File name not found
		// Create a new key value pair using the file name
		auto& texture = m[filename];
		// Load the texture from the file
		texture.loadFromFile(filename);

		// Return the texture
		return texture;
	}
}