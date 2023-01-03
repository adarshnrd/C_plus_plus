#include<bits/stdc++.h>
using namespace std;

class Baseclass {
public:
    int var_base;

    void display() {
        cout << "displaying base class variable" << var_base << endl;
    }
};

class Derivedclass : public Baseclass{
public:
    int var_derived;

    void display() {
        cout << "displaying base class variable" << var_base<< endl;
        cout << "displaying base class variable" << var_derived << endl;
    }
};

int main() {
    Baseclass * pointer_base_class;
    Baseclass obj_base;
    Derivedclass obj_derived;

    pointer_base_class = &obj_derived;

    pointer_base_class->var_base = 45;
    //pointer_base_class->var_derived = 45; will throw error
    pointer_base_class->display();

    pointer_base_class->var_base = 400;
    pointer_base_class->display();

    Derivedclass * pointer;
    pointer = &obj_derived;
    pointer->var_base = 454;
    pointer->var_derived = 454;
    pointer->display();
    
    return 0;
}