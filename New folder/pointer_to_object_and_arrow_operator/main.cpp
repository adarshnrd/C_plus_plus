#include<bits/stdc++.h>
using namespace std;

class Complex{
    int real, imagine;
public:
    void setdata(int a, int b){
        real = a;
        imagine = b;
    }
    void getdata(){
        cout<<"the real part is"<<real<<endl;
        cout<<"the imagine part is"<<imagine<<endl;
        
    }
};
int main(){
// complex c1;
// complex *ptr=%c1;
    Complex *ptr = new Complex;
// (*ptr).setdata(1,5);
    ptr->setdata(1,5);
    ptr->getdata();
    
    //array of object
    Complex *ptr1 = new Complex[4];
    ptr1->setdata(1,4);
    ptr1->getdata();
   
    
return 0;
}