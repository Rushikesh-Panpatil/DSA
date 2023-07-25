#include<iostream>
using namespace std ;

int main (){
    //  //outer Loop
    //  for ( int row=0; row<4; row=row+1){
    //         //inner Loop
    //     for (int col=0; col<4; col=col+1){
    //         cout << " * " ;
    //     }
    //     cout << endl;
    //  }
    
     //generic code

    int n ;
    cout<< "enter the number"<< endl;
    cin>> n ;
     for ( int row=0; row<n; row=row+1){
            //inner Loop
        for (int col=0; col<n; col=col+1){
            cout << " * " ;
        }
        cout << endl;
     }
}