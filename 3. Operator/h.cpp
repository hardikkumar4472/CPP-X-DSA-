//Relational Operators
#include <iostream>
using namespace std;
int main(){
    int a = 5;
    int b = 3;
    cout << "Equal to: " << (a == b) << endl; // 0 (false)
    cout << "Not equal to: " << (a != b) << endl; // 1 (true)
    cout << "Greater than: " << (a > b) << endl; // 1 (true)
    cout << "Less than: " << (a < b) << endl; // 0 (false)
    cout << "Greater than or equal to: " << (a >= b) << endl; // 1 (true)
    cout << "Less than or equal to: " << (a <= b) << endl; // 0 (false)
    return 0;
}