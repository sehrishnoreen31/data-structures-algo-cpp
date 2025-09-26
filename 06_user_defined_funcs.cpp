#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

float leaf_area(float length=0.0, float width=0.0, float k=0.0){
    // length width and correction factor 
    if ((length > 0.0) && (width > 0.0) && (k>0.0)){
        return (k * length * width);
    }
    // elliptical area
    else if ((length>0.0) && (width>0.0)){
         return (M_PI/4.0) * length * width;
    }
    // proportional length square
    else if ((length>0.0) && (width==0.0)){
        return (4.0/7.0) * pow(length, 2);
    }
    else {
        return 0.0;
    }

}
int main(){
    float l, w, k, area;
    cout<< "enter leaf length (cm): "; cin>>l;
    cout<< "enter leaf width (cm): "; cin>>w;
    cout<< "enter leaf constant: "; cin>>k;
    area = leaf_area(l, w, k);
    if (area >= 0.0){
        cout<< "area = " << fixed << setprecision(3) << area << " cm^2" << endl;
    }
    else{
        cout<< "invalid inputs!";
    }
    
    return 0;
}