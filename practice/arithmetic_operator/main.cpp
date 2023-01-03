#include<iostream>

using namespace std;

int main(){
    int a=4 ,b=5;
    cout<<"operators in c++";
    //arithmetic operators
    cout<<"the value of  a + b is:- "<<a+b<<endl;
    cout<<"the value of a - b is:- "<<a-b<<endl;
    cout<<"the value of a * b is:- "<<a*b<<endl;
    cout<<"the value of a / b is:- "<<a/b<<endl;
    cout<<"the value of a % b is:- "<<a%b<<endl;
    cout<<"the value of a ++ is:- "<<a++<<endl;
    cout<<"the value of a-- is:- "<<a--<<endl;
    cout<<"the value of ++a is:- "<<++a<<endl;
    cout<<"the value of --a is:- "<<--a<<endl;
    cout<<endl;
    // Assignment Operator --> used to assign variables
    /* int =2 , b=9;
    char='a';*/
    
    //comparison operators
    cout<<"following are comparison operators"<<endl;
    cout<<"the value of a==b is "<<(a==b)<<endl;
    cout<<"the value of a!=b is "<<(a!=b)<<endl;
    cout<<"the value of a>=b is "<<(a>=b)<<endl;
    cout<<"the value of a<=b is "<<(a<=b)<<endl;
    cout<<"the value of a>b is "<<(a>b)<<endl;
    cout<<"the value of a<b is "<<(a<b)<<endl;
    
    //logical operator
    cout<<"the value of logical operation && "<<((a==b) && (a<b))<<endl;
    
    cout<<"the value of logical operation or "<<((a==b)|| (a<b))<<endl;
    
    cout<<"the value of logical operation not "<<(!(a==b))<<endl;
    
    return 0;


}