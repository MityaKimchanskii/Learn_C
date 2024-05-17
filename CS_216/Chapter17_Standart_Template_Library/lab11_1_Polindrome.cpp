#include <iostream>
#include <vector>

using namespace std;

template<typename T>
bool palindrome(const vector<T>& vec) {
    int n = vec.size();

    for (int i = 0; i < n / 2; ++i) {
        if (vec[i] != vec[n - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter number of elements in your vector: ";
    cin >> n;

    vector<int> vec(n);

    cout << "Enter elements of the vector: ";
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }

    cout << "Your vector is a palindrome: " << (palindrome(vec) ? "Yes" : "No") << std::endl;

    return 0;
}