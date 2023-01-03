#include<bits/stdc++.h>
using namespace std;

int main(){
    int divident, divisor, quotient, remainder;
    
    cout<<"enter the value of divident"<<endl;
    cin>>divident;
    
    cout<<"enter the value of divisor"<<endl;
    cin>>divisor;
    
    quotient = divident / divisor;
    //quotient = divisor / divident;
    
    remainder = divident % divisor;
    //remainder = divisor & divident;
    cout<<"the quotient of sum is  "<<quotient<<endl
        <<"the remainder of the sum is  "<<remainder<<endl;
            //75/9=r9    
return 0;
}