// net salary = basic salary + Basic salary*Percentage of allowance - basic salary*percentage of deductions
#include<iostream>
using namespace std;
int main(){ 
    int basic_salary,allowance_percentage,deduction_percentage;             //int variable
    float net_salary;                                                       // float var
    cout<<"Enter the value of basic salary,allowance percentage and deduction percentage: ";       //displaying message on screen
    cin>>basic_salary>>allowance_percentage>>deduction_percentage;                                 // input from user
    net_salary = basic_salary + (allowance_percentage*basic_salary*0.01)-(deduction_percentage*basic_salary*0.01);  // net_salary expression
    cout<<"Net salary = "<<net_salary;                                      // displaying result on the screen


    return 0;
}