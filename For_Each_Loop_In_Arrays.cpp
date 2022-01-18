// #include<iostream>
// using namespace std;
// int main(){
//     int A[] = {1,2,3,4,5,6,7};
//     for(int x:A){             // for x in A
//         cout<<x<<endl;
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){    
    int A[]={1,2,3,4,5,6,7};
    for(auto x:A){                  // auto will automatically set the data type of x same as that of the array.
        cout<<x<<endl;
    }
    return 0;
}