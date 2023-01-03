#include<iostream>

using namespace std;

//structure we use when there are different datatypes
/*struct employee
{
    int eid;
    char car;
    float salary;
};

int main(){
    struct employee adarsh;
    adarsh.eid = 12121;
    adarsh.car = 'Bmw';
    adarsh.salary = 21000000;
    cout<<"The eid of adarsh"<<adarsh.eid<<endl;
    cout<<"The car of adarsh"<<adarsh.car<<endl;
    cout<<"The salary of adarsh"<<adarsh.salary<<endl;
    

    
    return 0;
}*/
 typedef struct employee    //here we will use typedef its a simple thing that
{                 //now we can call struct employe with our own name mention
                     
    int eid;        
    char car;
    float salary;
}em;

union money //we can use only one datatype at a time for union for better memory management
{//we can use one thing from this
    int product;
    char characters;
    float rupess;
};

int main(){
   
    //----------union money------------
  /*  union money m1;
    m1.product = 121;
    cout<<m1.product<<endl;
    m1.product = 121;
    cout<<m1.characters<<endl;*/
    //if will try to use more than one datatype i will get garbage value
 
    //----struct employee---------
    em adarsh;
    /*adarsh.eid = 12112;
    adarsh.car = 'Bmw';
    adarsh.salary = 1200010; 
    cout<<"The eid of adarsh"<<adarsh.eid<<endl;
    cout<<"The car of adarsh"<<adarsh.car<<endl;
    cout<<"The salary of adarsh "<<adarsh.salary<<endl;
*/
    
    enum meal{breakfast,launch,dinner};
    //cout<<breakfast;
    meal m2 =launch;
    
    cout<<(m2==1)<<endl;
    return 0;
}