#include<iostream>
using namespace std;
int findmax(int x,int y);
int main(){
    int a,b,c,max=0;
    cout<<"Enter the values of a,b and c: ";
    cin>>a>>b>>c;
    max = findmax(a,b);
    max = findmax(max,c);
    cout<<"Maximum Number = "<<max;
    return 0;
}
int findmax(int x,int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}