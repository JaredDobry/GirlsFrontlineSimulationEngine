#pragma once
#include <Stats.h>
namespace TypeLibrary
{
	class Item
	{
	public:
		Item();
		~Item();

		virtual void AffectStats(Stats& inRef);
	};
}

