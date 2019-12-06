#include "TileSet.h"
namespace TypeLibrary
{
	TileSet::TileSet() {}

	TileSet::~TileSet() {}

	void TileSet::SetTiles(const std::set<std::pair<unsigned int, const std::shared_ptr<const Tile>>>& tiles)
	{
		m_tiles = tiles;
	}

	void TileSet::SetTile(unsigned int key, const std::shared_ptr<const Tile> tile)
	{
		if (key > 0 && key < 10) //Convention in the community is to index [1,9] for the tile set, make sure the key is in that range
			m_tiles.insert(std::pair<unsigned int, const std::shared_ptr<const Tile>>(key, tile));
	}

	const std::set<std::pair<unsigned int, const std::shared_ptr<const Tile>>>& TileSet::GetTiles() const
	{
		return m_tiles;
	}

	const std::shared_ptr<const Tile> TileSet::GetTile(unsigned int tile) const
	{
		auto findItr = std::find_if(m_tiles.begin(), m_tiles.end(), [tile](std::pair<unsigned int, Tile> p) {
			return p.first == tile;
		});
		if (findItr != m_tiles.end())
			return findItr->second;
		else 
			return nullptr;
	}
}