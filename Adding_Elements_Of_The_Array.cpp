#include<iostream>
using namespace std;
int main(){
    int A[]={1,2,3,4,5,6,7,8,9,10};
    int sum = 0;
    for(int x:A){
        sum = sum + x;
    }
    cout<<"The sum of elements of the array is "<<sum;
    return 0;
}