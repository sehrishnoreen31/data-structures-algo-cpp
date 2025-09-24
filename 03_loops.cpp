#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

// function to generate a random number
int gen_randn(int min, int max){
    // generate number
    static const double fraction = 1.0 / static_cast<double> (RAND_MAX) + 1.0; // predefined value of RAND_MAX in cstdlib
    // evenly distribute across range
    return ((max - min + 1) * rand() * fraction);

}

// call the function inside int main
int main(){
    // seed value for system clock
    // If want different sequences every time run the program, we need a seed that changes, like current system time.
    // srand(static_cast<unsigned int>(time(0)));
    srand(1); // using a fixed seed gives same number each time program runs

    // loop to generate n numbers
    int n;
    cout<< "how many numbers to generate? "; cin>> n;
    for(int i=0; i < n; i++){
        cout<< gen_randn(0, 10)<< endl;
    }
    return 0;
}