#include<bits/stdc++.h>
using namespace std;

int sum(int a,int b){
    cout<<"using 2 arguments"<<endl;
    return a+b;
}

int sum(int a , int b, int c){
    cout<<"using 3 arguments"<<endl;
    return a+b+c;
}

int volume(double r, int h){
    cout<<"the volume of cylinder"<<endl;
    return(3.14*r*r*h);
}

int volume(int a){
   cout<<"the volume of cube"<<endl;
    return a*a*a;
}
int volume(int l, int b , int h){
   cout<<"the volume of rectangle"<<endl;
    return (l*b*h);
}

int main(){

    cout<<"enter 2 digit"<<sum(1,2)<<endl;
    cout<<"enter 3 digit"<<sum(1,2,4)<<endl;
    cout<<"the volume of cuboid"<<volume(3,7,6)<<endl;
    cout<<"the volume of cylindre"<<volume(3,6)<<endl;
    cout<<"the volume of cube"<<volume(3)<<endl;
    
return 0;
}