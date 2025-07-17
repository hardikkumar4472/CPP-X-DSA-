//Do while loop
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Print natural numbers from 1 to n using a do-while loop
    int i = 1;
    do {
        cout << i << " ";
        i++;
    } while (i <= n);
    cout << endl;

    // Calculate the sum of natural numbers from 1 to n using a do-while loop
    int sum = 0;
    i = 1;
    do {
        sum += i;
        i++;
    } while (i <= n);
    cout << "Sum of natural numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}