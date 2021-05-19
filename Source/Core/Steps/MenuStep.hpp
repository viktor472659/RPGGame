

#pragma once

#ifndef _MenuStep_HPP_
#define _MenuStep_HPP_


#include <vector>

using namespace std;

struct userChoice {
    string person;
    int complexity;
};

class MenuStep {

public:
    static MenuStep &Get() {
        static MenuStep instance;
        return instance;
    }

    userChoice startMenu();

private:
    const string choosePersonDesc = "Please choose the person which one do you want to play!";
    const vector<string> choices{"Ranger", "Rogue"};
    const vector<int> complexity{1, 2, 3};
};

#endif //_MENU_STEP_HPP_