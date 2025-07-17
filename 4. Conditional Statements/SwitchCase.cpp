//SwitchCase
#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter a number (1-3): ";
    cin >> a;

    switch (a) {
        case 1:
            cout << "You entered one." << endl;
            break;
        case 2:
            cout << "You entered two." << endl;
            break;
        case 3:
            cout << "You entered three." << endl;
            break;
        default:
            cout << "Invalid input." << endl;
    }

    return 0;
}