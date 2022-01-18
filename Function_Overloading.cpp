#include<iostream>
using namespace std;
int add(int x,int y);
int add(int x,int y,int z);
float add(double x,double y);
int main(){
    int x1,x2;
    double x3;
    x1 = add(2,3);
    cout<<x1<<endl;
    x2 = add(2,3,4);
    cout<<x2<<endl;
    x3 = add(2.3,4.6);
    cout<<x3;
    return 0;
}
int add(int x,int y){
    return(x+y);
}
int add(int x,int y,int z){
    return(x+y+z);
}
float add(double x,double y){
    return(x+y);
}