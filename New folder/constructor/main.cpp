#include<bits/stdc++.h>
using namespace std;

class Complex {
    int a, b;

public:
    /*    creating a constructor
        constructor is a special member function with the same name as of the class.
        it is used to initilize the objects of its class
        it is automatically invoked whenever an object is created */
    Complex(void); // constructor declaration

    void printnumber() {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }

};

Complex::Complex(void) //---> this is a default constructor as it takes no parametets
{
    a = 10;
    b = 20;

}

int main() {

    Complex v1, v2, v3;
    v1.printnumber();
    v2.printnumber();
    v3.printnumber();

    return 0;
}