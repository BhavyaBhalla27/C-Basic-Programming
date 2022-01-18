#include<iostream>
using namespace std;
int main(){
    int a[7] = {4,8,6,9,5,2,7};
    int num,c=0;
    cout<<"Enter the number: ";
    cin>>num;
    for(int i=0;i<7;i++){
        if(a[i]==num){
            c++;
    }
    }
    if(c==1){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }
    return 0;
}