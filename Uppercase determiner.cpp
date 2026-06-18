#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z') // or use isupper(ch)
        cout << "Uppercase letter" << endl;
    else
        cout << "Not an uppercase letter" << endl;
    return 0;
}
