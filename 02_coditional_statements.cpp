#include<iostream>
using namespace std;
int main(){
    // if else
    // int i;
    // cout<< "enter an integer: "<< endl;
    // cin>>i;
    // cout<< "you entered " << i << endl;
    // if (i < 100)
    //     cout<< "less than 100";
    // else if(i > 100)
    //     cout<< "greater than 100";
    // else 
    //     cout<< "equal to 100";

    
    // switch
    int o, b, c;
    cout<< "operations:"<< endl << "1. additiion" << endl << "2. subtraction" << endl << "3. multiplication" << endl << "4. division" << endl << "please enter operation number to perform: ";
    cin>> o;
    cout<< "enter 1st num: "; cin>>b;
    cout << "enter 2nd num: "; cin>>c;

    switch(o){
        case 1:
        cout<< b << "+" << c << "=" << b+c<< endl; break;
        case 2:
        cout<< b << "-" << c << "=" << b-c<< endl; break;
        case 3:
        cout<< b << "*" << c << "=" << b*c<< endl; break;
        case 4:
        if (c==0)
            cout<< "cannot divide by 0";
        else
            cout<< b << "/" << c << "=" << b/c<< endl;
             break;
        default:
        cout<< "invalid inputs!"<< endl;
    }

    return 0;
}