#include<bits/stdc++.h>
using namespace std;

template<class t1, class t2>
int average(t1 a, t2 b) {

    float avg = (a + b) / 2;
    return avg;
}

template<class q>
void swapp(q &a, q &b) {
    q temp = a;
    a = b;
    b = temp;
}

int main() {

    float a;
    a = average(45, 1.5);
    cout << a<<endl;

    int x = 5, y = 4;
    swapp(x, y);
    cout << x << endl << y;


    return 0;

}