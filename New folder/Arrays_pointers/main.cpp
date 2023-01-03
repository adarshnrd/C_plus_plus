#include<iostream>

using namespace std;

int main(){
    //Array example
    int marks[]={10,20,30,40};//int marks[4]={10,20,30,40}
    /*cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
*/
     //we change the value of an array
   // marks[2]=44;
  /*  cout<<"these are  marks "<<marks[2]<<endl;
 
    
    int mm[4];
    mm[0]= 55;
    mm[1]={66};
    mm[2]={77};
    mm[3]={88};
    cout<<"these are math marks "<<mm[0]<<endl;
    cout<<"these are math marks "<<mm[1]<<endl;
    cout<<"these are math marks "<<mm[2]<<endl;
    cout<<"these are math marks "<<mm[3]<<endl;*/
    
    /*for(int i =0;i<4;i++)
    {
    
        cout<<"the value of "<<i<<" is "<<marks[i]<<endl;
    }
    */
   /* int i = -1;
    while(i<3){
    
        cout<<i++<<"the value of "<<i<<" is "<<marks[i]<<endl;
    }*/
    
  /*  int i = 0;
    do{
        cout<<"the value of "<<i<<" is "<<marks[i]<<endl;
        cout<<i++;
    }
    while(i<4);
    */
    
    //---------pointers and arrays---------------
    int* p = marks;
   /* cout<<"the value of marks[0]"<<*p<<endl;
    cout<<"the value of marks[1]"<<*(p+1)<<endl;
    cout<<"the value of marks[2]"<<*(p+2)<<endl;
    cout<<"the value of marks[3]"<<*(p+3)<<endl;
    */
    cout<<*(p++)<<endl;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    return 0;
}