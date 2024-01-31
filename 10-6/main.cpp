#include <iostream>
#include <unordered_map>

class romanType {
private:
    std::string romanNumeral;
    int integerValue;

public:
    // Constructor to initialize the object with a Roman numeral
    romanType(std::string numeral) {
        romanNumeral = numeral;
        convertToInteger();
    }

    // Function to convert Roman numeral to integer
    void convertToInteger() {
        std::unordered_map<char, int> romanValues{
            {'M', 1000},
            {'D', 500},
            {'C', 100},
            {'L', 50},
            {'X', 10},
            {'V', 5},
            {'I', 1}
        };

        integerValue = 0;
        int prevValue = 0;

        for (char c : romanNumeral) {
            int currentValue = romanValues[c];

            if (currentValue > prevValue) {
                integerValue += (currentValue - 2 * prevValue);
            } else {
                integerValue += currentValue;
            }

            prevValue = currentValue;
        }
    }

    // Function to print the Roman numeral
    void printRoman() {
        std::cout << "Roman Numeral: " << romanNumeral << std::endl;
    }

    // Function to print the positive integer
    void printInteger() {
        std::cout << "Positive Integer: " << integerValue << std::endl;
    }
};

int main() {
    // Test the program with a Roman numeral entered by the user
    std::string userNumeral;
    std::cout << "Enter a Roman numeral: ";
    std::cin >> userNumeral;

    romanType userRoman(userNumeral);
    userRoman.printRoman();
    userRoman.printInteger();

    return 0;
}
