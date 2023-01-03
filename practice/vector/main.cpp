#include<bits/stdc++.h>
using namespace std;

template <class T>
void Display(vector<T> &v){
    cout<<"displaying this vector"<<endl;
    
    for(int i = 0 ;i < v.size();i++){    
        cout<<v[i]<< " ";
       // cout<<v.at(i)<< " ";
    }
    cout<<endl;
}

int main() {
    
   /* vector <int> vec1;
    int element;
    int size;
    cout<<"enter the size of element"<<endl;
    cin>>size;
    
    for (int i= 0; i < size; i++) {
        cout << "enter elements in vector" << endl;
        cin>>element;
        vec1.push_back(element);
    }
    //vec1.pop_back();
    Display(vec1);
    vector<int> :: iterator iter =vec1.begin();
    vec1.insert(iter+3,2, 55);
    Display(vec1);*/
    
    vector <float> vec3(4, 14);
    Display(vec3);
    cout<<"the size of vector is"<<vec3.size();

    return 0 ;
}