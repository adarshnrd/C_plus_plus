#include<bits/stdc++.h>
using namespace std;

class Base {
public:
    int var = 1;

    virtual void display() {
        cout << "the value of var is" << var << endl;
    }
};

class Derived : public Base {
    int vara = 2;

    void display() {
        cout << "the value of var is" << var << endl;
        cout << "the value of var is" << vara << endl;

    }
};

int main() {
    Base *pointer;
    Base obj1;
    Derived obj2;
    pointer= &obj2;
    pointer->display();

    return 0;
}