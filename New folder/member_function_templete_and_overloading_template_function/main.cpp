#include<bits/stdc++.h>
using namespace std;

template<class t>
class Ad{
    t ada;
    public:
    Ad(int a){
        ada =a;
    }
    void display();
};

template<class t>
void Ad<t> ::display(){

    cout<<"the value of a is "<<ada<<endl;
}

int main(){
    Ad <int>a(5);
    a.display();
return 0;
}