#include<iostream>
using namespace std ;

int main(){
    int n;
    cin>> n;
//alphabet_palindrome_pyramid
   
    for(int row=0; row<n; row=row+1){
    
    int col;
    for(col=0; col<row+1; col=col+1){
        int ans =col+1 ;
        char ch =ans +'A' -1 ;
        cout<< ch;
    
    }

    //  reverse couting printing

    for(int col=row; col>=1; col =col-1){
       int ans =col ;
        char ch =ans +'A' -1 ;
        cout<< ch;
    }
       cout <<endl;
   }

    // numeric palindrome pyramid

//    for(int row=0; row<n; row=row+1){
    
//     int col;
//     for(col=0; col<row+1; col=col+1){
//         cout<< col+1;
    
//     }

//     //  reverse couting printing

//     for(int col=row; col>=1; col =col-1){
//         cout << col;

//     }
//        cout <<endl;
//    }
}