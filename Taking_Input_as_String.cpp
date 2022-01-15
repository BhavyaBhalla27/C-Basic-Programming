// Taking name as input from the user
//1st Way
// #include<iostream>
// using namespace std;
// int main(){
//     string name;                        //declaring string variable
//     cout<<"May I know your Name?: ";    // printing message on the screen
//     cin>>name;                          // Taking name as input
//     cout<<"Welcome "<<name;             // Displaying message on the screen
//     return 0;  
// }
//2nd Way

#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"May I know your Name?: ";
    getline(cin,name);                       // getline(cin,var_name);
    cout<<"Welcome "<<name;
    
    return 0;  
}

/*
The difference between the two programs is that the 1st Way will read only Anil if we gave our input as Anil Kumar but the 2nd Way
will print Anil Kumar due to getline(cin,name); 
Better way is 2nd Way
 */


