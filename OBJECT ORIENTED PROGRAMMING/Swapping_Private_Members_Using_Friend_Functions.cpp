#include<iostream>
using namespace std;
class c2;
class c1{
    int val1;
    public:
    void setValue(int a){
        val1 = a;
    }
    void display(){
        cout<<val1;
    
    }
    friend void exchange(c1 &x,c2 &y);
};
class c2{
    int val2;
    public:
    void setValue(int b){
        val2 = b;
    }
    void display(){
        cout<<val2;
    }
    friend void exchange(c1 &x,c2 &y);
};
void exchange(c1 &x, c2&y){
    int temp = x.val1;
    x.val1=y.val2;
    y.val2=temp;
}

int main(){
    c1 oc1;
    c2 oc2;
    oc1.setValue(34);
    oc2.setValue(67);
    cout<<"The value of c1 and c2 before swapping is ";
    cout<<endl;
    oc1.display();
    cout<<endl;
    oc2.display();
    exchange(oc1,oc2);
    cout<<endl;
    cout<<"The value of c1 and c2 after swapping is ";
    cout<<endl;
    oc1.display();
    cout<<endl;
    oc2.display();
    return 0;
}