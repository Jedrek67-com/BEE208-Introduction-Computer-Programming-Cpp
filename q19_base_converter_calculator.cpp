#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
#include <iomanip>
using namespace std;

// Converts a binary string (e.g. "1011") to its decimal value.
int binaryToDecimal(const string& binary) {
    int decimal = 0;
    int length = binary.length();
    for (int i = 0; i < length; i++) {
        if (binary[i] == '1')
            decimal += (int)pow(2, length - i - 1);
    }
    return decimal;
}

string decimalToHex(int decimal) {
    ostringstream oss;
    oss << hex << uppercase << decimal;
    return oss.str();
}

string decimalToOctal(int decimal) {
    ostringstream oss;
    oss << oct << decimal;
    return oss.str();
}

int main() {
    string binary;
    int choice;

    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = binaryToDecimal(binary);

    cout << "\n--- Binary Conversion Calculator ---" << endl;
    cout << "1. Binary to Decimal" << endl;
    cout << "2. Binary to Hexadecimal" << endl;
    cout << "3. Binary to Octal" << endl;
    cout << "Choose an option: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Decimal: " << decimal << endl;
            break;
        case 2:
            cout << "Hexadecimal: " << decimalToHex(decimal) << endl;
            break;
        case 3:
            cout << "Octal: " << decimalToOctal(decimal) << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}
