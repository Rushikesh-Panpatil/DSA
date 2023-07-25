#include<iostream>
using namespace std ;

int main(){
    int n ;
    cin >> n ;

    // ans --> store number of set bit 
        int ans =0;
    while (n != 0){
        
        //found one set bit ;
        //so increment set bit count;

        if(n & 1){
            ans++;
        }

        //right shift 
        n= n>> 1;
    }
    cout<< " number of set bits "<< ans << endl;
    return 0;
}