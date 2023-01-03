#include<bits/stdc++.h>
using namespace std;

void display(list<int> &lst) {
    list<int> ::iterator it;

    for (it=lst.begin();it != lst.end();it++){
    
        cout<<*it<<" ";
    }
    
}

int main() {
    list<int> lst1;
    lst1.push_back(45);
    lst1.push_back(5);
    lst1.push_back(4);
    lst1.push_back(51);
    lst1.push_back(90);
    display(lst1);
    cout<<endl;
    
    //*****----removing an element from list
    /*lst1.pop_back();
    cout<<endl;
    display(lst1);
    lst1.pop_front();
    display(lst1);
    cout<<endl;*/
    //*****----removing an selected element from list
    //lst1.remove(90);
    //display(lst1);
    //cout<<endl;
    lst1.sort();
    display(lst1);
    cout<<endl;
    
    list<int> lst2(3);
    list<int> :: iterator iter;
    iter =lst2.begin();
    *iter = 90;
    iter++;
    *iter = 40;
    iter++;
    *iter = 30;
    iter++;
    display(lst2);
    lst2.sort();
   lst1.merge(lst2);
   cout<<endl<<"list1 after merging"<<endl;
   display(lst1);
   cout<<endl;
   lst1.reverse();
   display(lst1);
    return 0;
}