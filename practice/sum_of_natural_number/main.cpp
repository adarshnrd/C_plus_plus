#include<bits/stdc++.h>
using namespace std;

//second method
//----sum of n natural number = n*(n+1)/2
int main(){
    int a, sum = 0;
    cout<<"enter a positive integer : ";
    cin>>a;
    for(int i=1; i<=a;++i)
    {
        sum+= i;
    }
    cout<<"sum "<<sum;
    return 0;
}