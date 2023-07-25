#include<iostream>
using namespace std;

int main(){
    // int n = 528;

    // while (n != 0){
    //     int rem = n % 10;
    //     cout<< rem << " ";

    //     n= n / 10;

    // }
    // cout<< endl;
    // return 0;



    int n=528;
    cout<<"using for loop"<<endl;
    for(; n != 0 ; n =n/10){
         int rem = n % 10;
        cout<< rem << " ";

    }
           return 0;

}