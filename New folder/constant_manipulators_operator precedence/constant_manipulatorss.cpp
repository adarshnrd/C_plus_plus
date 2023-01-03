#include<iostream>
#include<iomanip>
using namespace std;

int main(){
   
   /* int a = 14;
    cout<<"the value of a is :"<<a<<endl;
    a= 45;
    cout<<"the current value of a is"<<a;*/
   
   // ---------------constant----------------------
    //const int a = 14;
    //cout<<"the value of a is :"<<a<<endl;
    
    //---------------------manipulators in c++----------------------
   /* int a = 3, b = 78, c= 1233;
    cout <<"the value of a without setw is "<<a; 
    cout<<"the value of a with  is "<<setw(4)<<a<<endl; 
    cout<<"the value of a with  is "<<setw(6)<<c<<endl;*/
    
    //------------------operator precedence--------
    int w = 3, q = 5;
    //int c= (w*q)+5;
    int c =((((w*5)+q)-45)+90);//it will calulate sum in left to right format
    cout<<c;
    
    return 0; 
    
   }
