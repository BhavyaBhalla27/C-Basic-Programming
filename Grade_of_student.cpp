#include<iostream>
using namespace std;
int main(){
    float m1,m2,m3,avg;
    cout<<"Enter m1,m2 and m3: ";
    cin>>m1>>m2>>m3;
    avg = (m1+m2+m3)/3;
    if(m1>=0&&m2>=0&&m3>=0){
    if(avg>=60){
        cout<<"A Grade";
    }
    else if(avg>=35&&avg<60){
        cout<<"B Grade";
    }
    else{
        cout<<"C Grade";
    }
    }
    else{
        cout<<"Enter valid marks";
    }
    return 0;
       
}