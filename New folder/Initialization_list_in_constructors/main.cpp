#include<bits/stdc++.h>
using namespace std;

/*
 syntax for initilization list in constructor:
 constructor (argument-list) : initilization-section
 {
 assignment + other code;
  }
 class  Test{
 int a,b; 
 public:
 Test(int i, int j): a(i),b(j)-{construstion body} 
 };
 */
class Test {
    int a , b;
public:
//    Test(int i , int j) : a(i), b(j)
//    Test(int i , int j) : a(i), b(i+j)
//    Test(int i , int j) : a(i), b(2*j)
//    Test(int i , int j) : a(i), b(a + j)
//    Test(int i , int j) : b(j), a(i+b)
    Test (int i , int j){
        a =i;
        b =j;
        cout<<"constructor executed"<<endl;
        cout<<"the value of a"<<a<<endl;
        cout<<"the value of b"<<b<<endl;
      
    }
};
int main(){
    Test t(4, 6);

return 0;}