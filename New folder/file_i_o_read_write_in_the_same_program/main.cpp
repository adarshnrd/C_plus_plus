#include<bits/stdc++.h>
using namespace std;

int main(){
    
    ofstream out("ada.txt");
    cout<<"enter the name"<<endl;
    string name;
    cin>>name;
    
    out<< name + " is my name" ;
    out.close();
    
    ifstream in("ada.txt");
    string file;
    in>>file;
    cout<<"the content of file is"<<file;
    in.close();
return 0;
}