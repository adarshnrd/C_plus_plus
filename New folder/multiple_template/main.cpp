#include<bits/stdc++.h>
using namespace std;

template <class t1,class t2>
class Base {
public:
    t1 data1;
    t2 data2;

    Base(t1 a, t2 b) {
        data1 = a;
        data2 = b;
    }

    void display(){
    
      cout<<this->data1<<endl<<this->data2<<endl;
      
    }
};

int main() {

    Base <float, int> ada(10.45,45);
    ada.display();
    return 0;
}
