#include <string>
#include "MenuStep.hpp"
#include "../../Game/Dialogue/dialogue.hpp"

using namespace std;

userChoice MenuStep::startMenu() {
    auto dialogue = new Dialogue(this->choosePersonDesc, this->choices, this->complexity);

    int personId = dialogue->choosePerson();
    dialogue->userChoice(this->choices[personId - 1]);

    int complexityId = dialogue->chooseComplexity();
    dialogue->userChoice(to_string(this->complexity[complexityId - 1]));

    userChoice res;
    res.person = this->choices[personId - 1];
    res.complexity = this->complexity[complexityId - 1];

    return res;
}
