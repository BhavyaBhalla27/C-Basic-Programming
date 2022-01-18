#include<iostream>
using namespace std;
int main(){
    int a[7]={4,8,6,9,5,2,7};
    int max = a[0];
    for(int i=1;i<7;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    cout<<"Maximum element in the array is "<<max;
    return 0;
}