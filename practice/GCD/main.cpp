#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1 ,n2;
    cout<<"enter 2 number"<<endl;
    cin>>n1>>n2;
    
    while(n1 !=n2){
    
        if(n1>n2)
            n1 -=n2;
            
            else 
            n2 -=n1;        
        
    }
        cout<<"HCF = " <<n1;
    return 0;
}