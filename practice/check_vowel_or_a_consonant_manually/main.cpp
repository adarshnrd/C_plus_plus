#include<bits/stdc++.h>
using namespace std;

int main(){
    char c;
    bool lowercaseVowel, uppercaseVowel;
    cout<<"enter a alphabet : ";
    cin >>c;
    lowercaseVowel = (c == 'a' ||c == 'e'||c == 'i'||c == 'o'||c == 'u' );
    uppercaseVowel = (c == 'A' ||c == 'E'||c == 'I'||c == 'O'||c == 'U' );
   
    if(!isalpha(c))
        cout<<"Error ! Non-alphabet charater.";
        else if(lowercaseVowel || uppercaseVowel)
        cout<< c <<"is a vowel";
        else
        cout<< c <<"is a constant. ";
              
    
return 0 ;
}