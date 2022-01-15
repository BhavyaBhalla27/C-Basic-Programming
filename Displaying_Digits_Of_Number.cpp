#include<iostream>
using namespace std;
int main(){
    int num,rem;
    cout<<"Enter the number: ";
    cin>>num;
    while(num!=0){
        rem = num%10;
        num = num/10;
        cout<<rem<<endl;
    }
    return 0;
}