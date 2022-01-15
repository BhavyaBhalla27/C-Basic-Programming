#include<iostream>
using namespace std;
int main(){
    int num,i=1,c=0;
    cout<<"Enter the number: ";
    cin>>num;
    while(i<=num){
        if(num%i==0){
            cout<<i<<endl;
            c++;
        }
        i++;
    }
    if(c==2){
        cout<<"Prime Number";
    }
    else{
        cout<<"Not Prime";
    }
    return 0;
}