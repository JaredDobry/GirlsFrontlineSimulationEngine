#pragma once
#include <vector>
#include <set>
#include <Tile.h>
namespace TypeLibrary
{
	class TileSet
	{
	public:
		TileSet();
		~TileSet();

		void SetTiles(const std::set<std::pair<unsigned int, Tile>> tiles);
		void SetTile(unsigned int key, const Tile& tile);

		std::set< std::pair<unsigned int, Tile>> GetTiles() const;
		Tile GetTile(unsigned int tile) const;

	private:
		std::set<std::pair<unsigned int, Tile>> m_tiles;
	};
}


