#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    if (str.find('a') != string::npos)
        cout << "Contains 'a'" << endl;
    else
        cout << "Does not contain 'a'" << endl;
    return 0;
}
