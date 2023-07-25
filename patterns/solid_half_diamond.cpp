// #include <iostream>
// using namespace std;
// int main() {
  
//     int n;
//   cin>> n;
  
//     // Loop to print the upper half
//     // diamond pattern
//     for (int row = 0; row < n; row++) {
//         for (int col = 0; col < row + 1; col++)
//             cout << "*";
//         cout << endl;
//     }
  
//     // Loop to print the lower half
//     // diamond pattern
//     for (int i = 1; i < n; i++) {
//         for (int j = i; j < n; j++)
//             cout << "*";
//         cout << endl;
//     }
// }       





#include <iostream>
using namespace std;
int main() {
  
    int n;
  cin>> n;

  for(int row=0; row<2*n-1; row++){
    int cond=0;
    if(row<n){// growing phase of diamond
        cond=row;
    }
    else{
        cond = n -(row%n) -2 ;
    }
    for(int col=0; col<=cond; col++){
        cout<<"*";
    }
    cout<< endl;
  }
  
  
  
  }