#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string binary;
    cout << "Enter binary number: ";
    cin >> binary;
    int decimal = 0;
    int len = binary.length();
    for (int i = 0; i < len; i++) {
        if (binary[len - 1 - i] == '1')
            decimal += pow(2, i);
    }
    cout << "Decimal: " << decimal << endl;
    return 0;
}
