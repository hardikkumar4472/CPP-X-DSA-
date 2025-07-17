//While loop
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Print natural numbers from 1 to n using a while loop
    int i = 1;
    while (i <= n) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    // Calculate the sum of natural numbers from 1 to n using a while loop
    int sum = 0;
    i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }
    cout << "Sum of natural numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}