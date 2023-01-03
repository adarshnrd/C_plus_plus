#include<bits/stdc++.h>
using namespace std;
class Employee{//base class
public:
    int id;
    float salary;
    Employee(int inpid){
        id= inpid;
        salary= 34.0;
    }
    Employee (){}
};
// Derived Class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Note:
1. Default visibility mode is private
2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
3. Private Visibility Mode: Public members of the base class becomes Private members of the derived class
4. Private members are never inherited
*/

// Creating a Programmer class derived from Employee Base class
class Programmer :public Employee
{
public:
    int languagecode;
    Programmer(int inpid)
    {
        id = inpid;
        languagecode = 9;
    }
    void getdata(){
        cout<<id<<endl;
    }
};

int main(){
    Employee adarsh(1) , wegad(2);
    cout<<adarsh.salary<<endl;
    cout<<wegad.salary<<endl;
    Programmer skill(10);
    cout<< skill.languagecode<<endl;
    cout<< skill.id<<endl;
    skill.getdata();
return 0;
}