#include "Drops.hpp"


StatComponentData Drops::getDrop(StatComponentData data) {
    int random = rand() % 4 + 1;
    switch (random) {
        case 1:
            return GetBazukaData(data);
        case 2:
            return GetEnergyBottleData(data);
        case 3:
            return GetShieldPoisonData(data);
        default:
            return GetHealData(data);
    }
}


StatComponentData Drops::GetHealData(StatComponentData data) {
    if (data.Talents.FrostArmor) {
        int random = rand() % 100 + 1;
        if (random <= 10) {
            data.Defense += 1;
        }
    }
    data.Health += 5;
    return data;
}


StatComponentData Drops::GetBazukaData(StatComponentData data) {
    data.Attack += 5;
    return data;
}

StatComponentData Drops::GetEnergyBottleData(StatComponentData data) {
    data.Speed += 5;
    return data;
}

StatComponentData Drops::GetShieldPoisonData(StatComponentData data) {
    data.Defense += 5;
    return data;
}

