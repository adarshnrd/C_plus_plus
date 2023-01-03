#include<bits/stdc++.h>
using namespace std;

int main(){
    int a= 4;
    int *ptr= &a;
    *ptr =999;
    cout<<"the value of a is"<<a<<endl;
    cout<<"the value of PTR is"<<ptr<<endl;
    //new operator
    //int *p = new int(40);
    float *p = new float(40.18);
    cout<<"the value at address p is " << *(p)<<endl;
    
    int *arr = new int[3];
    arr[0] = 10;
    *(arr+1) = 20;
    arr[2] = 30;
    
    cout<<"the value at arr[0] p is " << arr[0]<<endl;
    cout<<"the value at arr[1] p is " << arr[1]<<endl;
    cout<<"the value at arr[2] p is " << arr[2]<<endl;

    //delete opertor
return 0;
}