#include<bits/stdc++.h>
using namespace std;

class Bankdeposit{
    int principal;
    int years;
    float intrestvalue;
    float returnvalue;
public:
    Bankdeposit(){}
    Bankdeposit(int p, int y , float r);
    Bankdeposit(int p, int y , int r);
    void show();
};

Bankdeposit :: Bankdeposit(int p, int y , float r){
    principal = p;
    years = y;
    intrestvalue = r;
    returnvalue = principal;
    for(int i= 0; i < y; i++){
        returnvalue =returnvalue * (1+intrestvalue);
    }
}
Bankdeposit :: Bankdeposit(int p, int y , int r){
    principal = p;
    years = y;
    intrestvalue = float(r)/100;
    returnvalue = principal;
    for(int i= 0; i < y; i++){
        returnvalue = returnvalue *(1+intrestvalue);
    }
}

void Bankdeposit :: show(){
    cout<<endl<<"principal amt was"<<principal<<"Return value after"<<years<<"Years is"<<returnvalue<<endl;
}     

int main(){
    Bankdeposit aa1,aa2,aa3;
    int p,y;
    float r;
    int R;
    
    cout<<"enter the value of p y r"<<endl;
    cin>>p>>y>>r;
    aa1 = Bankdeposit(p , y , r);
    aa1.show();
    
    cout<<"enter the value of p y r"<<endl;
    cin>>p>>y>>R;
    aa2 = Bankdeposit(p,y,R);
    aa2.show();
return 0 ;
}