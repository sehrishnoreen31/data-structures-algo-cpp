#include<iostream>
using namespace std;
int main(){
    // copy initialization 
    int i1 = 3;
    char c1 = 'a';
    bool flag1 = true;
    string s1 = "string 1";
    cout<< i1 << c1 << flag1 << s1 << endl;

    // direct initialization
    int i2(6);
    char c2('s');
    bool flag2(true);
    string s2("string 2");
    cout<< i2 << c2  << flag2 << s2 << endl;

    // brace initialization
    int i3{3};
    char c3{'h'};
    bool flag3{false};
    string s3{"string 3"};
    cout<< i3 << c3 << flag3 << s3;

    // void
    // void f; // will not store anything, not allowed, only for functions
    return 0;
}