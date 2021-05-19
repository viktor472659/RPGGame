
#pragma once

#ifndef DIALOGUE_HPP
#define DIALOGUE_HPP


#include <string>
#include <vector>

using namespace std;

class Dialogue {
public:
    Dialogue();

    Dialogue(const string &description, const vector<string> &choices, const vector<int> &complexity);

    int choosePerson();
    int chooseComplexity();

    void userChoice(string choice);

private:
    const string description;
    const vector<string> choices;
    const vector<int> complexity;
};

#endif // DIALOGUE_HPP