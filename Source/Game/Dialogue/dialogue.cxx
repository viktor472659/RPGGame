#include <iostream>
#include <utility>
#include "dialogue.hpp"

using namespace std;

Dialogue::Dialogue() {}

Dialogue::Dialogue(const string &description, const vector<string> &choices, const vector<int> &complexity)
        : description(move(description)), choices(move(choices)), complexity(move(complexity)) {}

int Dialogue::start() {
    cout << description << endl;

    for (int i = 0; i < this->choices.size(); ++i) {
        cout << i + 1 << ": " << this->choices[i] << endl;
    }

    int input = -1;

    while (true) {
        cin >> input;
        if (input > 0 && input <= choices.size()) {
            return input;
        }

        cout << "There no such variant. Please choose again!" << endl;
    }
}

int Dialogue::chooseComplexity() {
    cout << "Choose your complexity level" << endl;

    for (int i = 0; i < this->complexity.size(); ++i) {
        cout << i + 1 << ": " << this->complexity[i] << endl;
    }
    int input = -1;

    while (true) {
        cin >> input;
        if (input > 0 && input <= complexity.size()) {
            return input;
        }
        cout << "There no such variant. Please choose again!" << endl;
    }
}

void Dialogue::userChoice(string choice) {
    cout << "Your choose is : " + choice << endl;

}