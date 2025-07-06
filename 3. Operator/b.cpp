//TypeCasting       bool->char->int->float->double
#include <iostream>
using namespace std;
int main(){
    int a = 5;
    float b = 3.14;
    char c = 'A';
    
    // Implicit type casting (automatic/ Type Conversion)
    float result1 = a + b; // int to float
    cout << "Result of implicit type casting: " << result1 << endl;

    cout<<'A'-0<<endl;
    cout<<'A'+1<<endl;
    return 0;
}