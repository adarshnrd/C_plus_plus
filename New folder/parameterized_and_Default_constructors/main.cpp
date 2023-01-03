/*#include<bits/stdc++.h>
using namespace std;

class Complex 
{
    int a, b;

public:
    Complex(int, int);

    void printnumber() {
        cout << "your number is" << a << " + " << b << "i" << endl;
    };

    Complex ::Complex(int x , int y) //---> This is patameterized construction as it takes 2 parameters
    {
        a = x;
        b = y;
    }

    int main(){
        Complex a(4, 6);
        a.printnumber();

        Complex b = Complex(5, 7);
        b.printnumber();

        return 0;
    }*/
#include<iostream>
using namespace std;


class Complex
{
    int a, b;

public:
    Complex(int, int); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y) // ----> This is a parameterized constructor as it takes 2 parameters
{
    a = x;
    b = y;
    // cout<<"Hello world";
}

int main(){
    // Implicit call
    Complex a(4, 6);
    a.printNumber();

    // Explicit call
    Complex b = Complex(5, 7);
    b.printNumber();

    return 0;
}

    