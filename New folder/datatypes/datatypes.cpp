
#include<iostream>

using namespace std;
 
int c = 45;

int main(){
    
    //-----------build in data types-----------------
   /* int a,b,c;
    
    cout<<"enter the value of a:"<<endl;
    cin>>a;
    cout<<"enter the value of b:"<<endl;
    cin>>b;
    c= a+b;
    cout<<"the of c=a+b is:"<<c<<endl;
    cout<<"the global c is "<<::c;*/
   
    //-----------float, double and long double literals-----------------
    /*float d = 34.71f;
    long double e = 45.12l;
    cout<<"the value of d is :"<<d<<endl<<"the value of e is"<<e;
    cout<<"the size of 34.4 is "<<sizeof(34.4f)<<endl;
    cout<<"the size of 34.4 is "<<sizeof(34.4F)<<endl;
    cout<<"the size of 34.4 is "<<sizeof(34.4L)<<endl;
    cout<<"the size of 34.4 is "<<sizeof(34.4l)<<endl;*/
    
    //---------------reference variables-----------------
    //adarsh--->kanna-------->kannaaaa-------->blackfinisher
   /* float x = 554;
    float & y = x;
    cout<<x<<endl;
    cout<<y;*/
    
    //----------------------typecasting--------------
    int x = 45;
    float q = 45.6;
    cout<<"the value of a is: "<<(float)x<<endl;
    cout<<"the value of a is: "<<float(x)<<endl;
    
    cout<<"the value of a is: "<<(int)q<<endl;
    cout<<"the value of a is: "<<(float)q<<endl;
    
    cout<<"the value of a is: "<< q+x <<endl;
    cout<<"the value of a is: "<<(int)q+(int)x<<endl;
    cout<<"the value of a is: "<< x+(int)q<<endl;
    cout<<"the value of a is: "<<(float)x+q<<endl;
    cout<<"the value of a is: "<<(float)x+(float)q<<endl;
    
    return 0;
    
}