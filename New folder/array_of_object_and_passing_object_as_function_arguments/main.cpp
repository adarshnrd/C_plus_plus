#include<bits/stdc++.h>
using namespace std;

class employee {
    int id;
    int salary;
   
public:

    void setid(void) {
        salary = 132;
        cout << "enter the employee id" << endl;
        cin>>id;
    }

    void getid(void) {
        cout << "the employee id is " << id << endl;
    }
};

int main() {
    employee hr[5];
    for (int i = 0; i < 4; i++) {
        hr[i].setid();
        hr[i].getid();
    }

    return 0;
}