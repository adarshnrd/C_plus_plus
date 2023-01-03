/*#include<bits/stdc++.h>
using namespace std;

class simple_cal {
protected:
    int a, b;
public:
 int res;
    simple_cal() {
    };

    void add(int a, int b) {
        char c;
        cin>>c;
        switch (c){
            case'+':
            res = a + b;
        break;
        case'-':
        res = a - b;
        break;
        case'*':
        res = a*b;
        break;
        case'/':
        res = a / b;
        break;
        }
        cout <<"the sum is"<<res<<endl;
    }
};

int main() {
    simple_cal adarsh;
    adarsh.add(45,15);
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;

class simple{
protected:
    int a, b;
public:
    int res;
    void cal();
};
void simple ::cal(){
    char c;
    cout<<"enter the 1st number"<<endl;
    cin>>a;
    cout<<"enter the 2nd number"<<endl;
    cin>>b;
    cout<<"enter the symbol to perform method"<<endl;
    cin>>c;
    switch(c){
        case'+':   
            res=a+b;
            break;
        case'-':   
            res=a-b;
            break;
        case'*':   
            res=a*b;
            break;
        case'/':   
            res=a/b;       
            break;
    }
    cout<<"the operation perform is"<<res<<endl;
}


int main(){
    simple adarsh;
    adarsh.cal();
return 0 ;
} */
#include<bits/stdc++.h>
using namespace std;

class simplecal {
    int a, b;
public:

    void getdata1() {
        cout << "enter the value of a" << endl;
        cin>>a;
        cout << "enter the value of b" << endl;
        cin>>b;
    }

    void operation() {
        cout << "enter the value a+b " << a + b << endl;
        cout << "enter the value a-b " << a - b << endl;
        cout << "enter the value a*b " << a * b << endl;
        cout << "enter the value a/b " << a / b << endl;
    }
};
class sintificcal{
    int a , b;
public:
void getdata(){
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of a"<<endl;
    cin>>b;
}    
performoperation(){
    cout<<"the value of cos(a) is: "<<cos(a)<<endl;
    cout<<"the value of sin(a) is: "<<sin(a)<<endl;
    cout<<"the value of exp(a) is: "<<exp(a)<<endl;
    cout<<"the value of tan(a) is: "<<tan(a)<<endl;
}
};

class hybridcal : public simplecal, public sintificcal{};

int main() {
hybridcal afa;
afa.getdata();
afa.performoperation();
afa.getdata1();
afa.operation();
    return 0;
}

























