#include <iostream>
#include <map>
#include <random>
#include <vector>
#include <cstdlib>
#include <string>

using namespace std;

string returnedState();

int main() {
    int i, correct = 0, wrong = 0;
    string answer, guess;
    

    map<string , string> stateAndCapital;
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

    cout << "**************************************************" << endl;

    // map <string, string> :: iterator it;

    for( i = 1 ; i <= 3 ; i++ ) {
        string state = returnedState();
        for (auto it = stateAndCapital.begin(); it != stateAndCapital.end(); ++it) {
            if (it->first == state) {
                cout << "Question " << i << ": What is the capital of ";
                cout << it->first << "?" << endl << "Answer: ";

                break;
            }

            cin >> guess;

            if (guess == answer) {
                correct++;
            } else {
                wrong++;
            }
        } 
    }

    cout << endl;
    cout << "Correct Answers : " << correct << endl;
    cout << "Wrong Answer : " << wrong << endl;

    return 0;
}

string returnedState() {
    const int ARRAY_SIZE = 11;
    string stateArray[ARRAY_SIZE] = {"Alabama", "Alaska", "Kansas", 
                                     "Texas", "Florida", "New Mexico"
                                     "Idaho", "New York", "California", 
                                     "Utah", "Michigan"
                                    };
    random_device rand;  
    mt19937 gen(rand());  
    uniform_int_distribution<>dis(0, 10);  
    int random_number = dis(gen);  

    

    return stateArray[random_number];                 
}