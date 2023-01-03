#include<bits/stdc++.h>
#include <map>
using namespace std;

int main(){
    map<string, int> marksMap;
    marksMap["adarsh"] = 80;
    marksMap["james"] = 60;
    marksMap["shishu"] = 40;

    map<string, int> :: iterator iter;
    for(iter =marksMap.begin(); iter !=marksMap.end();iter++ )
    { 
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    cout<<"the size is: "<<marksMap.size()<<endl;
    cout<<"the size is: "<<marksMap.max_size()<<endl;
    cout<<"the size is: "<<marksMap.empty()<<endl;
    
    
return 0;
}