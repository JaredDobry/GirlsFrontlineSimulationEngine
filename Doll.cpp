#include "Doll.h"

namespace TypeLibrary
{
	Doll::Doll()
	{
	}

	Doll::~Doll()
	{
	}

	void Doll::SetItems(const std::vector<std::shared_ptr<const Item>>& items)
	{
		m_items = items;
	}

	void Doll::SetStats(const Stats& stats)
	{
		m_stats = stats;
	}

	void Doll::SetTileSet(const TileSet& tileSet)
	{
		m_tileSet = tileSet;
	}

	std::vector<std::shared_ptr<const Item>> Doll::GetItems() const
	{
		return m_items;
	}

	Stats Doll::GetStats() const
	{
		return m_stats;
	}

	TileSet Doll::GetTileSet() const
	{
		return m_tileSet;
	}

	Tile Doll::GetTile(unsigned int tile) const
	{
		return m_tileSet.GetTile(tile);
	}
}