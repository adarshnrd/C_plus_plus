#include<bits/stdc++.h>
using namespace std;

class Student {
protected:
    int roll_no;
public:
    void set_roll(int a);
    void show_roll();
};

void Student:: set_roll(int a) {
    roll_no = a;
}

void Student::show_roll(void) {
    cout << "your roll number is" << roll_no << endl;
}

class test : virtual public Student {
protected:
    float maths;
    float english;
public:

    void set_marks(float a1, float a2) {
        maths= a1;
        english = a2;
    }

    void get_marks() {
        cout << "your maths is"<< maths << endl<<"your english marks is"<< english << endl;
    }
};

class sports : virtual public Student {
protected:
    float score;
public:

    void set_score(float sc) {
        score = sc;
    }

    void get_score() {
        cout << "your score is " << score << endl;
    }
};

class result : public test, public sports {
    float total;
public:

    void results(void) {
        total = maths + english + score;
        show_roll();
        get_marks();
        get_score();
        cout << "your total score is " << total << endl;
    }
};

int main() {
    result adarsh;
    adarsh.set_roll(12);
    adarsh.set_marks(80.3, 90.5);
    adarsh.set_score(9);
    adarsh.results();

    return 0;
}