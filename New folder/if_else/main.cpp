#include <iostream>

using namespace std;

int main(){
    int age;
    cout<<"tell me your age"<<endl;
    cin>>age;
    
    //----selection control structure: if  else-if else ladder------
   // if((age<18) && (age>0)){
   // cout<<"you are kid now try next time";
   // }
   // else if (age==18){
   //     cout<<"you have 1 year to go wait"<<endl;
   // }
   // else if(age<10){
   //     cout<<"let your parents make you first "<<endl;
   // }
   // else{
    //    cout<<"welcome to pro class";
   // }
    
    //----Switch case statement------
    switch(age)
    {
        case 1:
            cout<<"you are a kid play with your parents"<<endl;
            break;
    
        case 18:
            cout<<"you are having a freedom now"<<endl;
            break;
            
        case 25:    
            cout<<"you are a playboy now"<<endl;
            break;
    
        default:
            cout<<"no issue go and do what you want no age defined";
    }
        
    return 0;
}