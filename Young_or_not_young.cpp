#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>=1){
    if(age>=12&&age<=50){
        cout<<"Young";
    }
    else{
        cout<<"Not young";
    }
    }
    else{
        cout<<"Enter valid age";
    }
    return 0;
}