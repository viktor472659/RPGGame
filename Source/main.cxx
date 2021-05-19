#include <iostream>

// ECS
#include "Core/Core.hpp"
#include "Core/Utils.hpp"

#include "Game/Stats/StatComponent.hpp"
#include "Game/Stats/StatFactory.hpp"
#include "Core/Actor.hpp"
#include "Game/Stats/PersonAttack.hpp"
#include "Game/CharacterType.hpp"
#include "Core/Steps/MenuStep.hpp"


// Entry point
int main() {


//    auto *person = new StatFactory();
//    auto RangerData = person->CreateStatData(CharacterType::Ranger);
//    auto RogueData = person->CreateStatData(CharacterType::Rogue);
//
//
//    PersonAttack *P = new PersonAttack(RangerData);
//
//     P->attack(RogueData);
//
//
//    const auto rangerData = StatFactory::GetShared().CreateStatData(CharacterType::Ranger);
//    const auto rogueData = StatFactory::GetShared().CreateStatData(CharacterType::Rogue);
//
//    Actor *rangerActor = new Actor(0);
//    rangerActor->AddComponent(new StatComponent("Ranger", 1, rangerData));
//
//    Actor *rogueActor = new Actor(0);
//    rogueActor->AddComponent(new StatComponent("Rogue", 1, rogueData));

    // Start Game Loop
    Core::Shared().RunGameLoop();

    // Clear resources
    Core::Shared().DestroySystems();

    // Clear Resources
//    Utils::SafeRelease(rangerActor);
//    Utils::SafeRelease(rogueActor);


    return 0;
}