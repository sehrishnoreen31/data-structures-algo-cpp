#include<iostream>
#include<cmath>
#include<cctype>
using namespace std;

int main(){
    double x, y;
    x = 2.1, y = 3.0;
    cout<< "x = " << x << endl; cout<< "y = " << y << endl;
    // predefined funcs

    // cmath
    cout<< "absolute value of x abs() = "<< abs(x) << endl; // cmath 
    cout<< "absolute value of x fabs() = " << fabs(x) << endl; //cmath
    cout<< "floor x = " << floor(x) << endl; //cmath
    cout<< "ceil x = " << ceil(x) << endl; //cmath
    cout<< y << "^" << 2 << " = "<< pow(y, 2) << endl; //cmath
    cout<< "exp " << x << " = " << exp(x) << endl; // cmath
    cout<< "sqrt x = " << sqrt(x) << endl; // cmath
    // trigonometric funcs
    cout<< "cos x = " << cos(x) << endl; // cmath
    cout<< "sin x = " << sin(x) << endl; // cmath
    cout<< "tan x = " << tan(x) << endl; // cmath
    // reciprocal trig funcs
    cout<< "sec x = " << 1.0 / cos(x) << endl; // cmath
    cout<< "csc x = " << 1.0 / sin(x) << endl; // cmath
    cout<< "cot x = " << 1.0/ tan(x) << endl; // cmath
    // inverse trig funcs
    cout << "arcsin x = " << asin(x) << endl; // cmath
    cout << "arccos x = " << acos(x) << endl; // cmath
    cout << "arctan x = " << atan(x) << endl; // cmath
    cout << "arccot x = " << atan(1.0/x) << endl; //cmath
    cout << "arcsec x = " << acos(1.0/x) << endl; //cmath
    cout << "arccsc x = " << asin(1.0/x) << endl; //cmath

    // cctype
    char c = 'f', d = 'F';
    cout<< c << " is lowercase? " << bool(islower(c)) << endl; //cctype
    cout<< c << " is uppercase? " << bool(isupper(c)) << endl; //cctype
    cout<< d << " is lowercase? " << bool(islower(d)) << endl; //cctype
    cout<< d << " is uppercase? " << bool(isupper(d)) << endl; //cctype
    cout<< "make " << d << " lowercase: " << char(tolower(d)) << endl; //cctype
    cout<< "make " << c << " uppercase: " << char(toupper(c)) << endl; //cctype

    return 0;
}