
#include "StatFactory.hpp"

StatComponentData StatFactory::CreateStatData(CharacterType inType, float complexityLevel = 1.0) {
    switch (inType) {
        case CharacterType::Ranger:
            return GetRangerData(complexityLevel);

        case CharacterType::Rogue:
            return GetRogueData(complexityLevel);

        default:
            return GetDefault();
    }
}

StatComponentData StatFactory::GetRangerData(float complexityLevel) {
    StatComponentData data{};
    data.Health = (int)(50 * complexityLevel);
    data.Speed = 80;
    data.Attack = (int)(50 * complexityLevel);
    data.Defense = 20;
    return data;
}

StatComponentData StatFactory::GetRogueData(float complexityLevel) {
    StatComponentData data{};
    data.Health = (int)(70 * complexityLevel);
    data.Speed = 60;
    data.Attack = (int)(60 * complexityLevel);
    data.Defense = 40;
    return data;
}


StatComponentData StatFactory::GetDefault() {
    StatComponentData data{};
    data.Health = 55;
    data.Speed = 55;
    data.Attack = 55;
    data.Defense = 55;
    return data;
}
