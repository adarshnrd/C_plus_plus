#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long double factorial = 1.0;
    cout<<"enter the number factorial"<<endl;
    cin>>n;
    if (n == 0)
    cout<<"error write a positive number";
    else
        for(int i = 1 ;i <= n;++i){
            factorial *= i;
        }
            cout<<"the factorial is"<<factorial<<endl;
    return 0;
}