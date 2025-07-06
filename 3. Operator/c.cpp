//TypeCasting       bool->char->int->float->double
#include <iostream>
using namespace std;
int main(){
    int a = 5;
    float b = 3.14;
    char c = 'A';
    // Explicit type casting
    int result2 = (int)b; // float to int
    cout << "Result of explicit type casting: " << result2 << endl;

    // C-style type casting
    char result3 = (char)a; // int to char
    cout << "Result of C-style type casting: " << result3 << endl;


    cout<<'A'-0<<endl;
    cout<<'A'+1<<endl;
    return 0;
}