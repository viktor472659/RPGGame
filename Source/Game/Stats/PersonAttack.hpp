
#pragma once

#ifndef ENTITY_HPP
#define ENTITY_HPP

#include <string>
#include <map>

#include "StatFactory.hpp"

class PersonAttack {
public:
    PersonAttack(StatComponentData stats);

    StatComponentData attack(StatComponentData target);

    StatComponentData getStats() { return this->stats; }

protected:
    StatComponentData stats{};
};

#endif // ENTITY_HPP