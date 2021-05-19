
#pragma once

#ifndef _STAT_FACTORY_HPP_
#define _STAT_FACTORY_HPP_

#include "StatComponent.hpp"
#include "../CharacterType.hpp"

class StatFactory final {
public:
    static StatFactory &GetShared() {
        static StatFactory instance;
        return instance;
    }

    StatComponentData CreateStatData(CharacterType inType, float complexityLevel = 1.0);

//private:
    StatFactory() = default;

    StatFactory(const StatFactory &) = default;

    StatFactory(StatFactory &&) = default;

    StatFactory &operator=(const StatFactory &) = default;

    StatFactory &operator=(StatFactory &&) = default;

private:

    StatComponentData GetRangerData(float complexityLevel);

    StatComponentData GetRogueData(float complexityLevel);

    StatComponentData GetDefault();
};

#endif //_STAT_FACTORY_HPP_