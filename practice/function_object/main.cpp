#include<bits/stdc++.h>
using namespace std;

int main() {
    int array[] = {4, 5, 6, 4, 74};
    sort(array, array + 5);
    sort(array, array + 5, greater<int>( ));
    for (int i = 0; i<5; i++) {
        cout<<array[i]<<endl;
    }
    return 0;
}