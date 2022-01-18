#include<iostream>
using namespace std;
int add(int x,int y,int z = 0){                          //here z is default arguement
    return x+y+z;
}
int main(){
    int result;
    result = add(2,3,5);
    cout<<result<<endl;
    result = add(2,3);
    cout<<result;
    return 0;
}