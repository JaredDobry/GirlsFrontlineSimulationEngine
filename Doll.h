#pragma once
#include <vector>
#include <memory>
#include <Stats.h>
#include <TileSet.h>
#include <Tile.h>

namespace TypeLibrary
{
	class Item;

	enum class DollType {
		Unknown,
		Handgun,
		AssaultRifle,
		Rifle,
		MachineGun,
		SubmachineGun
	};

	class Doll
	{
	public:
		Doll();
		~Doll();

		void SetItems(const std::vector<std::shared_ptr<const Item>>& items);
		void SetStats(const Stats& stats);
		void SetTileSet(const TileSet& tileSet);
		void SetType(const DollType& type);

		std::vector<std::shared_ptr<const Item>> GetItems() const;
		Stats GetStats() const;
		TileSet GetTileSet() const;
		Tile GetTile(unsigned int tile) const;
		DollType GetType() const;

	private:
		std::vector<std::shared_ptr<const Item>> m_items;
		Stats m_stats;
		TileSet m_tileSet;
		DollType m_type;
	};
}
