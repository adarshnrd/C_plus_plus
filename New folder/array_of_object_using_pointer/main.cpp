#include<bits/stdc++.h>
using namespace std;

class Shopitem {
    int id;
    float price;
public:

    void setprice(int a, float b) {
        id = a;
        price = b;
    }

    void getprice() {
        cout << "code of product is" << id << endl;
        cout << "price of product is" << price << endl;
    }
};

int main() {
    int size = 3;
    Shopitem *ptr = new Shopitem;
    Shopitem *ptrtemp = ptr;
    int p ,i;
    float q;
    for(i =0;i<size;i++){
        cout<<"enter product id and price"<<endl;
        cin>>p>>q;
        //(*ptr).setprice(p,q);
        ptr->setprice(p,q);
        ptr++;
    }

    for(i = 0;i<size;i++){
        cout<<"item number : "<<i+1<<endl;
        ptrtemp->getprice();
        ptrtemp++;
    }
    
    return 0;
}