#include<bits/stdc++.h>
using namespace std;

class Base1 {
    int data;
public:

    Base1(int i) {
        data = i;
        cout << "base class constructor called" << endl;
    }

    void printdatabase1(void) {
        cout << "the value of data1 is" << data << endl;
    }
};

class Base2 {
    int data2;
public:

    Base2(int i) {
        data2 = i;
        cout << "base2 class constructor called" << endl;
    }

    void printdatabase2(void) {
        cout << "the value of data1 is" << data2 << endl;
    }
};

class Derived : public Base1, public Base2 {
    int d1, d2;
public:

    Derived(int a, int b, int c, int d) : Base1(a), Base2(b) {
        d1 = c;
        d2 = d;
        cout << "Derived class construction called" << endl;
    }

    void printdataderived(void) {
        cout << "the value of d1 is" << d1 << endl;
        cout << "the value of d2 is" << d2 << endl;
    }
};

int main() {
    Derived adarsh(1, 2, 3, 4);
    adarsh.printdatabase1();
    adarsh.printdatabase2();
    adarsh.printdataderived();

    return 0;
}