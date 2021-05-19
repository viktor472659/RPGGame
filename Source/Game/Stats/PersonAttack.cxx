#include "PersonAttack.hpp"

PersonAttack::PersonAttack(StatComponentData stats) {
    this->stats = stats;
}

StatComponentData PersonAttack::attack(StatComponentData target) {
    StatComponentData newStats = target;
    const int health = target.Health -= (int) ((stats.Attack - stats.Defense) / 10);
    newStats.Health = health;

    return newStats;
}

