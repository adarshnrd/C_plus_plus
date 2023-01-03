#include<bits/stdc++.h>
using namespace std;

inline int product(int a , int b){
    return a*b;
}

float moneyRecived(float currentMoney, float factor=1.04){
    return currentMoney * factor;
}
// int strlen(const char *p){}

int main(){
    int a, b;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    cout<<"the sum of a and b are"<<product(a , b)<<endl;
    int money = 100000;
    cout<<"money with 1 year intresest"<<moneyRecived(money)<<endl;
    cout<<"money with 1 year intresest"<<moneyRecived(money, 1.1)<<endl;
            
 
    return 0 ;
}