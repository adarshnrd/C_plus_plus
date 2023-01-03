#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cout << "enter your swap no." << endl;
    cin >> a>>b;
    cout << "the vlaue of a is :- "<< a << " the value of b is :-" << b<< endl;
    c = a;
    a = b;
    b = c;
    cout << "the vlaue of a is :- "<< a << " the value of b is:- " << b<< endl;

    return 0;
}