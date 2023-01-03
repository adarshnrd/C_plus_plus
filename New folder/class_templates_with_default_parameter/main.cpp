#include<bits/stdc++.h>
using namespace std;

template<class t1 = int, class t2 = float, class t3 = char>
class Adarsh {
public:
    t1 ada;
    t2 ads;
    t3 add;

    Adarsh(t1 a, t2 b, t3 c) {
        ada = a;
        ads = b;
        add = c;
    }

    void display() {
        cout<<"the value of ada is "<<ada<<endl;
        cout<<"the value of ads is "<<ads<<endl;
        cout<<"the value of add is "<<add<<endl;

    }
};

int main() {
    Adarsh <> s2(45,54.1,'a');
    s2.display();
    cout<<endl;
    Adarsh <float,float,char> a2(95,54.1,'a');
    a2.display();

    return 0;
}