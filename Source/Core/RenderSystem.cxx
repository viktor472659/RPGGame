
#include "RenderSystem.hpp"
#include "Steps/MenuStep.hpp"
#include "Steps/BattleStep.hpp"
#include "../Game/Stats/StatFactory.hpp"

#include <iostream>

using namespace std;

bool RenderSystem::Initialize() {
    cout << "Initialize";
    return true;
}

void RenderSystem::Update() {

    if (this->step == "Battle") {
        BattleStep *btlStep = new BattleStep();
        btlStep->userAction(this->Person, this->EnemyData);
    }

    cout << "Update";
}

void RenderSystem::Destroy() {
    cout << "Destroy";
}

void RenderSystem::Render() {
    MenuStep *newGame = new MenuStep();
    userChoice data = newGame->startMenu();

    auto *person = new StatFactory();

    CharacterType chType;

    if (data.person == "Ranger") {
        chType = CharacterType::Ranger;
    } else {
        chType = CharacterType::Rogue;
    }

    this->Person = person->CreateStatData(chType);

    this->EnemyData = person->CreateStatData(CharacterType::Rogue);

    cout << "Render";
}
