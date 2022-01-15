#include<iostream>
using namespace std;
int main(){
    int hour;
    cout<<"Enter the hour: ";
    cin>>hour;
    if(hour>=0&&hour<=24){
    if(hour>=9&&hour<=18){
        cout<<"Working hour";
    }
    else{
        cout<<"Not Working hour";
    }
    }
    else{
        cout<<"Enter valid hour";
    }
    return 0;
}
