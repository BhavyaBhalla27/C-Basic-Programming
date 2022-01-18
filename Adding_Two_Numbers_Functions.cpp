#include<iostream>
using namespace std;
int add(int x,int y);
int main(){
    cout<<"Sum = "<<add(2,3);
    return 0;
}
int add(int x,int y){
    return(x+y);
}