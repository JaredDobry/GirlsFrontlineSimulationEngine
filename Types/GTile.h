#pragma once
#include "../Utilities/GlobalIncludes.h"
namespace TypeLibrary
{
    //Forward Declaration
    class Doll;

    class TileEffect
    {
    public:
        TileEffect();
        ~TileEffect();

        virtual void AffectDoll(Doll& inRef) {};
        virtual bool IsValid() { return false; }
    };

    class TileSet
    {
    public:
        TileSet();
        ~TileSet();

        bool HasEffectOnTile(uint8_t tile) const;
        TileEffect GetEffectOnTile(uint8_t tile) const;

        void SetEffectOnTile(uint8_t tile, const TileEffect& inRef);
        void SetAllTileEffects(const std::vector<std::pair<uint8_t, TileEffect>>& inRef);
        
    private:
        std::vector<std::pair<uint8_t, TileEffect>> m_effects;
    };
}