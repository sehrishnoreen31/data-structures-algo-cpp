#include<iostream>
using namespace std;
int main(){
    typedef string str; // alias for any type
    typedef int integer;

    str mystr{"this is a string."};
    integer myinteger{32};
    cout<< mystr<< myinteger;
    return 0;
}