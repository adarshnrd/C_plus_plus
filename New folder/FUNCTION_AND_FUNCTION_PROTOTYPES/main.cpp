#include<bits/stdc++.h>//it include for all type of directors

using namespace std;

//function prototype
//type function-name {arguments);
// int sum(int a , int b); //------acceptable
// int sum(int a , b); //------not acceptable
 int sum(int  , int ); //------acceptable
 void g(void);
 
int main(){
    int num1 , num2;
    cout<<"enter the first number "<<endl;
    cin>>num1;
    cout<<"enter the second number "<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters
    cout<<"the sum of num1 and num2 :-"<<sum(num1 , num2);
    g();
return 0;
}

sum(int a , int b){
    //formal parameter a and b will be taking values from actual parameters num1 and num2.
    int c = a+b;
    return c;}
void g(){
    cout<<endl<<"made by adarsh";
}