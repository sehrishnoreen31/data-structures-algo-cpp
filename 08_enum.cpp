#include<iostream>
using namespace std;

int main(){
    enum colors {YELLOW, GREEN, RED, BLUE};
    // enum grades {'A', 'B', 'C'}; // not valid

    enum grades {A, B, C};
    enum days {mon, tue, wed, thu, fri, sat, sun};

    grades mygrade = A;
    colors mycolor = BLUE;
    days myday = fri;
    cout<< mygrade << endl;
    cout<< mycolor << endl;
    cout<< myday << endl;
    
}