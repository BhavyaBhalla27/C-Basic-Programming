#include<iostream>
using namespace std;
template <class T>
T findmax(T x, T y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}
int main(){

    int c = findmax(10,5);
    float d = findmax(10.5,11.5);
    cout<<c<<endl;
    cout<<d;
    return 0;
}