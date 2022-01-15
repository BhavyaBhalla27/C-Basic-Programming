#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c,D;
    cout<<"Enter the values of a,b and c: ";
    cin>>a>>b>>c;
    D = sqrt((b*b)-(4*a*c));
    if(D>0){
        cout<<"Roots are real but not equal";
    }
    else if(D==0){
        cout<<"Roots are real and equal";
    }
    else{
        cout<<"Roots are imaginary";
    }
    return 0;
}