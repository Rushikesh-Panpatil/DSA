#include<iostream>
using namespace std ;

int main (){
     //outer Loop
     for ( int row=0; row<3; row=row+1){
            //inner Loop
        for (int col=0; col<5; col=col+1){
            cout << " * " ;
        }
        cout << endl;
     }
}