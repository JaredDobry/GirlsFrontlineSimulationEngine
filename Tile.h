#pragma once
#include <Stats.h>
namespace TypeLibrary
{
	class Tile
	{
	public:
		Tile();
		~Tile();
		
		virtual void AffectDollStats(Stats& inRef);
		virtual bool IsValid() const;
	};
}

