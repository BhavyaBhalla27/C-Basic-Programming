#include<iostream>
using namespace std;
int main(){
    int A[10]={1,2,3,4,5,6,7,8,9,10},i,sum=0;
    float average;

    for(i=0;i<10;i++){
        sum = sum + A[i];
    }
    average = sum/10.0;
    cout<<"Average = "<<average;

    return 0;
}