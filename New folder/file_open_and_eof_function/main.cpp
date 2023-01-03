#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ofstream out;
    out.open("aa.txt");
    out<<"hiii adarsh here \n";
    out<<"welcome to my world \n";
    out<<"spd is here \n";
    out.close();
    
    ifstream in;
    string asa;
    in.open("aa.txt");
    
    while(in.eof() == 0){
        getline(in,asa);
        cout<<asa<<endl;
    }
    in.close();
return 0;
}