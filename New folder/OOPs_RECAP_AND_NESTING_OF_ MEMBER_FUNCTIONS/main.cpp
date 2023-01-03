  // opps --- classes and objects
    /*
     c++ ---->initially called --> c with classes by strousstroup
     structures had limitation
                --> members are public
                --> no methods
     classes ----> stuctures  + more
     classes ----> can have methods and properties
     classes ----> can make few members as private and few as public
 //structures in c++ are typedef
     you can declare object along with the class declaration
     */
    /* class Employee{
    //class defination
    }adarsh,lovish,harry; */
// adarsh.salary = 8 makes no semce if salary is private(should be use method)
  
    // Nesting of member functions
#include<bits/stdc++.h>
using namespace std;

class binary
{
    string s;
public:
    void read(void);
    void chk(void);
    void ones_complement(void);
    void display(void);   
};

void binary :: read(void){
    cout<<"enter the number"<< endl;
    cin>> s;
}

void binary::chk(void)
{
    for(int i = 0; i < s.length(); i++)
    {
        if(s.at(i) != '0' && s.at(i) != '1')
        {
            cout<<"Incorrect binary number"<<endl;
            exit(0);
        }
    }
}

void binary :: ones_complement(void){
       for(int i = 0; i < s.length(); i++){
           if(s.at(i) == '0')
           {
           s.at(i) = '1';
               }
           else
           {
           s.at(i)= '0';
           }
       }
}

void binary :: display(void){
    cout<<"displaying your binary numbers"<<endl;
    for(int i= 0 ; i < s.length(); i++)
    {
    cout<< s.at(i);
    }
    cout<<endl;
}
int  main()
{
  
    binary b;
    b.read();
    b.chk();
    b.ones_complement();
    b.display();

    return 0;
}