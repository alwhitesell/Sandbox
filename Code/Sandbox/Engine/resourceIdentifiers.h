#ifndef RESOURCE_IDENTIFIERS_H
#define RESOURCE_IDENTIFIERS_H

// Forward declaration of SFML classes
namespace sf
{
		class Texture;
}

// Resource ID for sf::Texture
namespace Textures
{
	enum ID
	{
		Eagle,
		Raptor,
		Desert,
	};
}

// Forward declaration and a few type definitions
template <typename Resource, typename Identifier>
class ResourceHolder;

typedef ResourceHolder<sf::Texture, Textures::ID> TextureHolder;

#endif
