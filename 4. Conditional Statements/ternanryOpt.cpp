//Ternary operator
#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    // Using ternary operator to check if the number is positive, negative, or zero
    (a > 0) ? cout << "The number is positive." : (a < 0) ? cout << "The number is negative." : cout << "The number is zero.";

    return 0;
}