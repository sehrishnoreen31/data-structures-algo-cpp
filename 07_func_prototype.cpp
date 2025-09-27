#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

// rrr func prototypes
float required_run_rate(int runs_remaining, float overs_remaining);

int main(){
    int runs;
    float overs;
    float rrr;
    cout<< "enter remaining runs (57): "; cin>> runs;
    cout<< "enter remaining overs (7.5): "; cin>> overs;
    // square func call
    cout << fixed << setprecision(2) << required_run_rate(runs, overs) << endl;
    return 0;
}

// rrr func definition
float required_run_rate(int runs_remaining, float overs_remaining){
    int full_overs = int(overs_remaining ); // extracting the full overs (30.3 -> 30)
    int balls_left = int(round((overs_remaining - full_overs) * 10)); // extracting balls above full overs (0.3 * 10)  = 3 
    if (balls_left > 5) {
        cout<< "invalid input overs!"<< endl;
    }
    else{
        int total_balls_left = (full_overs * 6) + balls_left; // total balls left (30 * 6) + 3 = 180 + 3 = 183 
        float true_overs_remaining = float(total_balls_left)/ 6.0; // true overs remaining 183/6 = 30.5 
        float rrr = float(runs_remaining) / float(true_overs_remaining); // required run rate 200/30.5 = 6.557..
        return rrr;
    }
    
}