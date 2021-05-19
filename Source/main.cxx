#include <iostream>

// ECS
#include "Core/Core.hpp"
#include "Core/Utils.hpp"

#include "Game/Stats/StatComponent.hpp"
#include "Game/Stats/StatFactory.hpp"
#include "Core/Actor.hpp"

// Entry point
int main() {

    const auto rangerData = StatFactory::GetShared().CreateStatData(CharacterType::Ranger);
    const auto rogueData = StatFactory::GetShared().CreateStatData(CharacterType::Rogue);

    Actor *rangerActor = new Actor(0);
    rangerActor->AddComponent(new StatComponent("Ranger", 1, rangerData));

    Actor *rogueActor = new Actor(0);
    rogueActor->AddComponent(new StatComponent("Rogue", 1, rogueData));

    // Start Game Loop
    Core::Shared().RunGameLoop();

    // Clear resources
    Core::Shared().DestroySystems();

    // Clear Resources
    Utils::SafeRelease( rangerActor );
    Utils::SafeRelease( rogueActor );


    return 0;
}