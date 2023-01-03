#include<bits/stdc++.h>
using namespace std;

class base1 {
public:
    void tell() {
        cout << "i am your dad";
    }
};
class base2 {
public:
    void tell() {
        cout << "bap hu may ";
    }
};
class base3 :public base1, public base2 {
    int a;
public:
    void tell(){
    base1 :: tell();
    }
};

class a{
public:
    void yes(){
        cout<<"my name is mirror"<<endl ;
    
    }

};
class b: public a{
    int a;
public:
    void yes(){
        cout<<"my name is lasson"<<endl;
    
    }

};

int main() {
    //abiguty1

    /*base1 asa;
    base2 ll;
    base3 ada;
    asa.tell();
    ada.tell();*/
    
    a afa;
    b asd;
    afa.yes();
    asd.yes();


    return 0;
}