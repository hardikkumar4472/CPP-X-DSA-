//Sum of natural numbers
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Calculate the sum of natural numbers from 1 to n
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Sum of natural numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}
