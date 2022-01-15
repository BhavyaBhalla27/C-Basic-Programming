#include<iostream>
using namespace std;
int main(){
    int sum = 0,n;
    cout<<"Enter n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum = sum + i;
    }
    cout<<"Sum = "<<sum;

    return 0;
}