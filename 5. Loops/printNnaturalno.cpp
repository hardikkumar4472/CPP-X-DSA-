//Print n natural nos.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Print natural numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}