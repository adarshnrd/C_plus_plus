#include<bits/stdc++.h>
using namespace std;

class base1{
protected:
    int base11;
public:
    void set1(int a){
    
        base11 = a;
    }
};
class base2{
protected:
    int base12;
public:
    void set2(int a){
    
        base12 = a;
    }
};
class base3{
protected:
    int base13;
public:
    void set3(int a){
    
        base13 = a;
    }
};

class derived : public base1 ,public base2,public base3 {
public:
    void show(){
        cout<<"the value of base11 is"<<base11<<endl;
        cout<<"the value of base12 is"<<base12<<endl;
        cout<<"the value of base13 is"<<base13<<endl;
        cout<<"the sum of this value is"<<base11+base12+base13<<endl;
    }
};

int main()
{
    derived adarsh;
    adarsh.set1(15);
    adarsh.set2(10);
    adarsh.set3(20);
    adarsh.show();
return 0
;}