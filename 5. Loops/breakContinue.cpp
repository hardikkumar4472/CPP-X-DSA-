//Break,Continue
#include <iostream>
using namespace std;
int main() {
    // Break statement example
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break; // Exit the loop when i is 5
        }
        cout << i << " ";
    }
    cout << endl;

    // Continue statement example
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue; // Skip the iteration when i is 5
        }
        cout << i << " ";
    }
    cout << endl;

    return 0;
}