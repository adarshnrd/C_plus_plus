#include<iostream>

using namespace std;

int main(){

   /* for(int i=1;i<40;i++)
    {
        cout<<i<<endl;
        if(i==2)
           break;
    }
*/
     for(int i=1;i<40;i++)
    {
        
        if(i==2)
           continue;
        cout<<i<<endl;
    } 
     return 0;
}