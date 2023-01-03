#include<bits/stdc++.h>

using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;
}
void swap(int a, int b){//temp a  b
    int temp = a;         //  4  4  5
    a= b;                 //  4  5  5
    b = temp;             //  4  5  4
}
//call by reference using pointers
void swappointer(int* a, int* b){//temp a  b
    int temp = *a;         //  4  4  5
    *a = *b;               //  4  5  5
    *b = temp;             //  4  5  4
}

void swapreferencevar(int &a, int &b){//temp a  b
    int temp = a;         //  4  4  5
     a = b;               //  4  5  5
     b = temp;             //  4  5  4
}

int main(){
int x = 4, y=5;
//cout<<"the sum of x and b is "<<sum(x,y);
cout<<"the sum of x "<<x<<" and y is "<<y<<endl;
//swappointer (&x,&y);

swapreferencevar(x,y);
//swapreferencevar(x,y) = 765; //see back the video
cout<<"the sum of x "<<x<<" and y is "<<y<<endl;

return 0;
}