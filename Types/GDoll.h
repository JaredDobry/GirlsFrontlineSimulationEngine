#pragma once
#include "../Utilities/GlobalIncludes.h"
#include "GStats.h"
#include "GTile.h"
namespace TypeLibrary
{
    //Forward declaration for compile time
    class Item;
    class Skill;

    class Doll
    {
    public:
        Doll();
        ~Doll();

    private:
        std::vector<Item> m_items;
        std::vector<Skill> m_skills;
        Stats m_stats;
        TileSet m_tileSet;
    };
}