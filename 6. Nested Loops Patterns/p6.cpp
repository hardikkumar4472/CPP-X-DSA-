/*
*****
*   *
*   *
*   *   
*****
*/
#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for (int i=1;i<=a;i++){
        cout<<"*";
        for (int j=1;j<=a;j++){
            if (i==1 || i==a){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"*"<<endl;

    }
}