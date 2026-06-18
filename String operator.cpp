#include <iostream>
#include <string>
using namespace std;

int main() {
    string userString;
    
    cout << "Enter a string: ";
    cin >> userString;
    
    if (userString == "hello") {
        cout << "Hello!" << endl;
    } else {
        cout << "Goodbye!" << endl;
    }
    
    return 0;
}
