#include<bits/stdc++.h>
using namespace std;

class employee {
    int id;
    static int count; // static data member
public:

    void setdata(void) {
        cout << "enter the employee id" << endl;
        cin>>id;
        count++;
    }

    void getdata(void) {
        cout << "the id of employee is " << id << "the employee number is" << count << endl;
    }

    static void getcount(void) {
        cout << "the value of count is" << count << endl;
    }
};

int employee::count;

int main() {
    employee adarsh, rohan, lavish;

    adarsh.setdata();
    adarsh.getdata();
    employee::getcount();

    rohan.setdata();
    rohan.getdata();
    employee::getcount();

    lavish.setdata();
    lavish.getdata();
    employee::getcount();

    return 0;
}