#include <iostream>
#include <string>
#include <filesystem>

using namespace std;

int main() {
    string target;

    cout << "Enter the path of a file or directory: ";
    getline(cin, target);

    filesystem::path targetPath { target };

    if (filesystem::exists(targetPath)) {
        cout << "That path exists." << endl;
    } else {
        cout << "That path does not exist." << endl;
    }


    return 0;
}