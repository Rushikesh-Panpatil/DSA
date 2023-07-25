#include<iostream>
#include<limits.h> // for int_min
using namespace std;
int main(){

    int arr[] = {2,5,8,10,15,78,23,14,59,99,20};
    int size =11;
    //initialse the maxi variable with the minimum possible integer value

    int maxi =INT_MIN;

    for(int i =0; i<size ; i++){
        if(arr[i] >maxi){
            //found a number greater than maxi ,update maxi
            maxi = arr[i];
        }
    }
    cout<<"maximum number is "<< maxi << endl;
}