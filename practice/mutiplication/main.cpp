#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, range;
    cout<<"enter a positve number"<<endl;
    cin>>a;
    cout<<"enter a range you want"<<endl;
    cin>>range;
    
    for(int i = 1;i <=range;++i)
    {
        cout<<a <<" * "<< i << " = "<<a*i<<endl; 
    
    }
    
    return 0;
}