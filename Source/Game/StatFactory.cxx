
#include "StatFactory.hpp"

StatComponentData StatFactory::CreateStatData( CharacterType inType )
{
    switch (inType)
    {
    case CharacterType::Ranger:
            return GetRangerData();

    case CharacterType::Rogue:
            return GetRogueData();

    default:
        return StatComponentData();
    }
}

StatComponentData StatFactory::GetRangerData()
{
    StatComponentData data;
    data.Health = 50;
    data.Speed = 80;
    data.Attack = 50;
    data.Defense = 20;
    return data;
}

StatComponentData StatFactory::GetRogueData()
{
    StatComponentData data;
    data.Health = 70;
    data.Speed = 60;
    data.Attack = 60;
    data.Defense = 40;
    return data;
}

