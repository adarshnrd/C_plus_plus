#include<bits/stdc++.h>
using namespace std;

class Number{
    int a = 0;
public:
    Number(){
        a = 0;
    }
    Number(int num){
        a= num;
    }
    Number(Number &obj){
        cout<<"copy constructor called!!!"<<endl;
        a=obj.a;
    }
    void display(){
        cout<<"the number for this object is"<<a<<endl;
    }
};

int main(){
    Number x,y,z(45),z2;
    x.display();
    y.display();
    z.display();
   
    Number z1(z);//copy constructor is invoked
    z1.display();
    
    z2 =z;
    z2.display();
    
    Number z3 =z;
    z3.display();
return 0;
}