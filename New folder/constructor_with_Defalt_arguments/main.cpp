#include<bits/stdc++.h>
using namespace std;

class Simple{
    int data1;
    int data2;
    int data3;
public:
   Simple(int a, int b= 1 ,int c= 14){
       data1 =a;
       data2 =b;
       data3 =c;
   } 
   void printnumber();
};

void Simple ::printnumber(){
    cout<<"your data1 and data2 and data3 and are "<<data1<<","<<data2<<","<<data3<<endl;
}

int main(){
    Simple a(12);
    a.printnumber();
return 0;
}