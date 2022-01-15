// lcm = (product of two numbers)/hcf(a,b)
#include<iostream>
using namespace std;
int main(){
    int a,b,t1,t2,lcm;
    cout<<"Enter values of a and b: ";
    cin>>a>>b;
    t1=a;
    t2=b;
    while(a!=b){
        if(a>b){
            a = a - b;

        }
        else if(b>a){
            b = b - a;
        }
    }
    
    lcm = (t1*t2)/a;
    cout<<"LCM is = "<<lcm;
    return 0;
}