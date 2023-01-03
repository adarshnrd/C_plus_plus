#include<bits/stdc++.h>
using namespace std;

class CWA {
protected:
    string title;
    float rating;
public:

    CWA(string s, float r) {
        title = s;
        rating = r;
    }

    virtual void display() {
    }
    
    /*virtual void display() =0; 
     * by using this virtual function this class become a abstract classes
     * and this called a pure virtual function
    */
    
};

class VideoCWA : public CWA {
    float videolength;
public:

    VideoCWA(string s, float r, float vl) : CWA(s, r) {
        videolength = vl;
    }

    void display() {
        cout << "this is an amazing video with title " << title << endl;
        cout << "ratings: " << rating << "out of 5stars" << endl;
        cout << "length of video is : " << videolength << "mintues" << endl;
    }
};

class TextCWA : public CWA {
    int words;
public:

    TextCWA(string s, float r, int w) : CWA(s, r) {
        words = w;
    }

    void display() {

        cout << "this is amazing text tutorial with title" << title << endl;
        cout << "rating of this text tutorial " << rating << "out of 5star" << endl;
        cout << "no of words in this text tutorial is " << words << endl;
    }

};

int main() {

    string title;
    float rating, vlen;
    int words;

    //video part
    title = "C tutorial";
    vlen = 5.45;
    rating = 4;
    VideoCWA cvideo(title, rating, vlen);

    // text part
    title = "c tutorial";
    words = 500;
    rating = 5;
    VideoCWA ctext(title, rating, words);

    CWA * tuts[2];
    tuts[0] = &cvideo;
    tuts[1] = &ctext;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}