#include<iostream>
using namespace std;
int main(){
    int roll_no;
    cout<<"Enter roll no.: ";
    cin>>roll_no;
    if(roll_no>0){
        cout<<"Valid";
    }
    else{
        cout<<"Invalid";
    }
    return 0;
}
