#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n ;

    //outer loop
    for (int row =0 ; row<n ;row++){
        int k= 0;
        for(int col=0; col<((2*n)-1); col++){
            //starting spaces
            if (col<n-row-1){
                cout <<" ";
                //stars
            }   else if( k< 2* row + 1){
                if(k==0 || k==2 * row || row== n-1)
                cout << "*";
                else
                cout << " ";
                k++ ;
            }else{
                cout<<" " ;
            }
        }
            cout << endl ;
        }
}








// #include <iostream>
// using namespace std;
// int main() {
//    int n, i, j;
//    cout << "Enter number of lines: ";
//    cin >> n;
//    for(i = 1; i<=n; i++) {
//       for(j = 1; j<=(n-i); j++) { //print the blank spaces before star
//          cout << " ";
//       }
//       if(i == 1 || i == n) { //for the first and last line, print the stars continuously
//          for(j = 1; j<=i; j++) {
//             cout << "* ";
//          }
//       }else{
//          cout << "*"; //in each line star at start and end position
//          for(j = 1; j<=2*i-3; j++) { //print space to make hollow
//             cout << " ";
//          }
//          cout << "*";
//       }
//       cout << endl;
//    }
// }
