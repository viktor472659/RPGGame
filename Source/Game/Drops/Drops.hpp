
#pragma once

#ifndef _Drops_HPP_
#define _Drops_HPP_

#include "../Stats/StatComponent.hpp"

class Drops final {
public:
    static Drops &GetShared() {
        static Drops instance;
        return instance;
    }

    Drops() = default;

    StatComponentData getDrop(StatComponentData data);

    static StatComponentData GetBazukaData(StatComponentData data);

    static StatComponentData GetEnergyBottleData(StatComponentData data);

    static StatComponentData GetShieldPoisonData(StatComponentData data);

    static StatComponentData GetHealData(StatComponentData data);

};

#endif //_Drops_HPP_