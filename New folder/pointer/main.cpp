#include<iostream>

using namespace std;
int main(){
 //pointer ---->is a data type which holds the address of otherdata types

    int a=4;
    int *b = &a;
    
    //----&---->(address of) operator
    cout<<b<<endl;//address of a
    cout<<&a<<endl;//address of a
   
    
    //----*---> (value at) dereference operator
    cout<<"the value at address b is"<<*b<<endl;
  //pointer to pointer
    int** c = &b;
    cout<<"the address of b"<<&b<<endl;
    cout<<"the address of b"<<c<<endl;
    cout<<"the address of b"<<*c<<endl;
    cout<<"the address of b "<<**c<<endl;// it will show the value of a because its pointer of pointer
    
    return 0;
}