#include<iostream>

using namespace std;

int main(){

/* loops in c++;
 * for loop
 * while loop
 * do-while loop;
*/
    
    /*-------syntax for for loop
          ------for(initialization; condition; updation)------
     {
          loop body(c++ code);
     }*/
            
    
   /* for(int i = 1; i<40 ; i++)
    {
        cout<<i<<endl;
        
    }*/
    
    /*-----infinty loop-----------
      for(int a=1; 20 < 40; a++){
        cout<<a<<endl;                      
    }*/
   
    /*--------while loop in c++---------
     syntax
     while(condition)
     {
     c++ statement;
     }*/
    
    //printing 1 to 40 using while loop
    /*int q = 1;
    while(q<=40){
        cout<<q<<endl;
        q++;
    }*/
   /* int a = 1;
    while(true){
        cout<<a<<endl;
        a++;
    }*/
    
    //----------do while-----------
   /* int i = 1;
    do{
        cout<<i<<endl;
        i++;
    }while(i<=40);
    */
    
    /*for(int a=1; a<=10; a++)
    {
        cout<<a*6<<endl;
        }*/
    for (int i=1; i<=10; i++)
    {
        
        cout<<3<<" * " <<i<<" = "<<i*3<<endl;
    
    }
     
    return 0;
}