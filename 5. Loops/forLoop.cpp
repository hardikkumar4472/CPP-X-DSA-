//ForLoop
#include <iostream>
using namespace std;
int main() {
    // For loop to print numbers from 1 to 10
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    // For loop to calculate the sum of numbers from 1 to 10
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    cout << "Sum: " << sum << endl;

    return 0;
}