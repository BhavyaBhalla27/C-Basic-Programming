#include<iostream>
using namespace std;
class Employee{
    int id;
    int salary;
    string name;
    public: 
    void setData(){
        salary = 122;
        cout<<"Enter the value of id: ";
        cin>>id;
        cout<<"Enter the name of Employee: ";
        cin>>name;
    }
    void getID(void){
        cout<<"The id of "<<name<<" is "<<id<<endl;
    }
};
int main(){
    Employee bhavya,harry;
    // harry.setData();           
    // harry.getID();
    // bhavya.setData();
    // bhavya.getID();
    // This will be a very cumbersome task if there are so many employees. So its better to make an array of objects.
    Employee fb[4];
    for(int i = 0;i<4;i++){
        fb[i].setData();
        fb[i].getID();
    }
    return 0;
}