//Assignment Operators
#include <iostream>
using namespace std;
int main(){
    int a = 5;
    a += 3; // a = a + 3
    cout << "Addition Assignment: " << a << endl; // 8
    a -= 2; // a = a - 2
    cout << "Subtraction Assignment: " << a << endl; // 6
    a *= 2; // a = a * 2
    cout << "Multiplication Assignment: " << a << endl; // 12
    a /= 3; // a = a / 3
    cout << "Division Assignment: " << a << endl; // 4
    return 0;
}