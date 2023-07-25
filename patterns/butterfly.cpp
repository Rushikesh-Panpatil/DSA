#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    // Getting the number of rows.
   
    cin >> n;

    

    // Main logic to print the Butterfly pattern.
    // Printing upper part.
    for( int row = 0; row <= n; row++ ){
        // Print left side stars.
        for( int col = 0; col <= row; col++ ){
            cout << "* ";
        }
        
        // Print spaces.
        int spaces = 2 * (n - row);
        for( int j = 0; j < spaces; j++){
            cout << "  ";
        }
        
        // Print right side stars.
        for( int j = 0; j <= row; j++ ){
            cout << "* ";
        }

        cout << endl;
    }
    
    // Printing bottom part.
    for( int i = n - 1; i >= 0; i-- ){
        
        // Print left side spaces.
        for( int j = 0; j <= i; j++ ){
            cout << "* ";
        }
        
        // Print spaces.
        int spaces = 2 * (n - i);
        for( int j = 0; j < spaces; j++){
            cout << "  ";
        }
        
        // Print right side stars.
        for( int j = 0; j <= i; j++ ){
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
