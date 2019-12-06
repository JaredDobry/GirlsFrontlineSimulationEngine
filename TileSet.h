#pragma once
#include <vector>
#include <set>
#include <memory>
#include <Tile.h>
namespace TypeLibrary
{
	class TileSet
	{
	public:
		TileSet();
		~TileSet();

		void SetTiles(const std::set<std::pair<unsigned int, const std::shared_ptr<const Tile>>>& tiles);
		void SetTile(unsigned int key, const std::shared_ptr<const Tile> tile);

		const std::set<std::pair<unsigned int, const std::shared_ptr<const Tile>>>& GetTiles() const;
		const std::shared_ptr<const Tile> GetTile(unsigned int tile) const;

	private:
		std::set<std::pair<unsigned int, const std::shared_ptr<const Tile>>> m_tiles;
	};
}


