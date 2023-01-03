#include<bits/stdc++.h>
#include <complex>
using namespace std;

int main(){
    float a,b,c,root1,root2,realpart,imagine,formula;
    cout<<"enter a ,b,c coffecient"<<endl;
    cin>>a>>b>>c;
    formula = b*b- 4*a*c;
    
    if(formula > 0){
        root1 = (-b + sqrt(formula)) /(2*a);
        root2 = (-b - sqrt(formula)) /(2*a);
        cout << "Roots are real and different." << endl;
        cout<<"the root1"<<root1;
        cout<<"the root2"<<root2;
    }
    else if (formula == 0 )
    {
        root1 = (-b)/(2*a); 
        cout << "Roots are real and same" << endl;
        cout << "root1 = root2"<<root1 << endl;     
    }
    else 
    {
        realpart = -b/(2*a);
        imagine = sqrt(-formula) /(2*a);
    cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realpart << "+" << imagine << "i" << endl;
        cout << "x2 = " << realpart << "-" << imagine << "i" << endl;
    }
    
    return 0;
}
