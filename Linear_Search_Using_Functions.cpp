#include<iostream>
using namespace std;
void search(int A[],int size,int key){
    int i=0,a=0;
    for(i=0;i<size;i++){
        if(A[i]==key){
            a++;
            break;
        }

    }
    if(a==1){
        cout<<"Element found at index "<<i;
    }
    else{
        cout<<"Element not found";
    }
}
int main(){
    int A[]={1,2,3,4,5},key;
    cout<<"Enter the element to be searched for : "; cin>>key;
    search(A,5,key);

    return 0;
}