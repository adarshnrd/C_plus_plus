#include<bits/stdc++.h>
using namespace std;

class Num{
int count= 0;
public:
    Num(){
    count++;
    cout<<"this is the time when constructot is called"<<count<<endl;
    }
    ~Num(){
        cout<<"this is the time when destructor is used"<<count<<endl;
        count--;
    }
};
int main (){
    cout<<"we are inside our main function"<<endl;
    cout<<"creating first object n1"<<endl;
    Num n1;
    {
        cout<<"entering this block "<<endl;
        cout<<"creating two objects"<<endl;
        Num n2,n3;
        cout<<"exting this block"<<endl;
    }
    cout<<"back to main menu"<<endl;
return 0;
}