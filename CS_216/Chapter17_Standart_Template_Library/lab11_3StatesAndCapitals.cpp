#include <iostream>
#include <map>
#include <vector>
#include <cstdlib>
#include <string>

using namespace std;

int main() {
    map <string, string> stateAndCapital;
    
    stateAndCapital.insert(pair <string, string> ("Alabama", "Montgomery"));
    stateAndCapital.insert(pair <string, string> ("Alaska", "Juneau"));
    stateAndCapital.insert(pair <string, string> ("Kansas", "Topeka"));
    stateAndCapital.insert(pair <string, string> ("Texas", "Austin"));
    stateAndCapital.insert(pair <string, string> ("Florida", "Tallahassee"));
    stateAndCapital.insert(pair <string, string> ("New Mexico", "Santa Fe"));
    stateAndCapital.insert(pair <string, string> ("Idaho", "Boise"));
    stateAndCapital.insert(pair <string, string> ("New York", "Albany"));
    stateAndCapital.insert(pair <string, string> ("California", "Sacramento"));
    stateAndCapital.insert(pair <string, string> ("Utah", "Salt Lake City"));
    stateAndCapital.insert(pair <string, string> ("Michigan", "Lansing"));

    const int FIRST_STATE = 0; 
    const int LAST_STATE = stateAndCapital.size() - 1;

    int correct = 0;
    int wrong = 0;
    string answer;

    for (auto it = stateAndCapital.begin(); it != stateAndCapital.end(); ++it) {

        int stateIndex = rand() % stateAndCapital.size();
        string state = it->first;
        string correctCapital = it->second;

        cout << "What is the capital of " << state << "? ";
        cin >> answer;

        if (answer == correctCapital) {
            correct++;
            cout << "Correct!\n";
        } else {
            wrong++;
            cout << "Wrong. The correct capital is " << correctCapital << ".\n";
        }
    }

    cout << "Total correct answers: " << correct << endl;
    cout << "Total wrong answers: " << wrong << endl;

    return 0;
}