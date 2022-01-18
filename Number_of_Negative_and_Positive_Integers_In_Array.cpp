#include<iostream>
using namespace std;
int main(){
    int a[10] = {-2,6,5,3,-9,45,90,-80,43,32};
    int n=0,p=0;
    for(int i = 0; i <10;i++){
        if(a[i]>0){
            p++;
        }
        else if(a[i]<0){
            n++;
        }
        
    }
    cout<<"The number of negative integers in the array is "<<n<<endl;
    cout<<"The number of positive integers in the array is "<<p;
    
    return 0;
}