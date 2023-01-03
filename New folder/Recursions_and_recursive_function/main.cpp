#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n * factorial(n-1);
}
// step by step evaluation of factorial
//factorial(4) = 4 * factorial(3);
//factorial(4) = 4 * 3 factorial(2);
//factorial(4) = 4 * 3 * 2 factorial(1);
//factorial(4) = 4 * 3 * 2 * 1;
//factorial(4) = 24;
int fib(int q){
    if(q<=1){
        return 1;
    }
    return fib(q-2) + fib(q-1);
}

int main(){
    //factorial of a number:
    // 4! =4*3*2*1=24
    //0! = 1 by definition
    //1! = 1 by defination
    //n! = n * (n-1)!
    int a;
    cout<<"enter the number"<<endl;
    cin>>a;
    //cout<<"the factorial of "<<a<<" is "<<factorial(a)<<endl;
    cout<<"the factorial of "<<a<<" is "<<fib(a)<<endl;

return 0;
}
