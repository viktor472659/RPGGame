#include "PersonAttack.hpp"

PersonAttack::PersonAttack(StatComponentData stats) {
    this->stats = stats;
}

StatComponentData PersonAttack::attack(StatComponentData target) {
    float critical = 1.0;
    StatComponentData newStats = target;
    int health = 0;

    if (stats.Talents.Critical) {
        int random = rand() % 100 + 1;
        if (random <= 10) {
            critical = 1.5;
        }
    }

    health = target.Health -= (int) ((stats.Attack * critical - target.Defense) / 10);

    newStats.Health = health;
    return newStats;
}

