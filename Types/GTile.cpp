#include "GTile.h"

TypeLibrary::TileEffect::TileEffect()
{
}

TypeLibrary::TileEffect::~TileEffect()
{
}

TypeLibrary::TileSet::TileSet()
{
}

TypeLibrary::TileSet::~TileSet()
{
}

bool TypeLibrary::TileSet::HasEffectOnTile(uint8_t tile) const
{
    for (std::pair<uint8_t, TileEffect> p : m_effects)
    {
        if (p.first == tile)
        {
            return true;
        }
    }
}

TypeLibrary::TileEffect TypeLibrary::TileSet::GetEffectOnTile(uint8_t tile) const
{
    for (std::pair<uint8_t, TileEffect> p : m_effects)
    {
        if (p.first == tile)
        {
            return p.second;
        }
    }
    return TileEffect();
}

void TypeLibrary::TileSet::SetEffectOnTile(uint8_t tile, const TileEffect& inRef)
{
}

void TypeLibrary::TileSet::SetAllTileEffects(const std::vector<std::pair<uint8_t, TileEffect>>& inRef)
{
}

