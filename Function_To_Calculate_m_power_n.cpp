#include<iostream>
using namespace std;
int power(int m,int n);
int main(){
    int m,n,ans=0;
    cout<<"Enter the base and power: ";
    cin>>m>>n;
    ans = power(m,n);
    cout<<"Ans = "<<ans;
    return 0;
}
int power(int m,int n){
    int result=1;
    for(int i=0;i<n;i++){
        result = result*m;
    }
    return result;
}