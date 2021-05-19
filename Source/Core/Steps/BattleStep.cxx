#include "BattleStep.hpp"
#include "../../Game/Stats/PersonAttack.hpp"
#include "../../Game/Dialogue/dialogue.hpp"
#include "../../Game/Drops/Drops.hpp"
#include <string>
#include <iostream>

using namespace std;

void BattleStep::userAction(PersonAttack PersonObj, StatComponentData EnemyObj) {

    const vector<string> actions{"attack", "runAway"};

    const string answer = Dialogue::askUser(actions);

    if (answer == "attack") {
        auto newStats = PersonObj.attack(EnemyObj);
        if (newStats.Health <= 0) {

            Drops *drops = new Drops();
            drops->getDrop(PersonObj.getStats());

            cout << "Enemy is killed";
            return;
        }
    } else if (answer == "runAway") {
        //Exit
    }
}
