#include<iostream>
#include<cmath>
using namespace std ;

int decimalToBinaryMethod_1(int n){
     //Division method 
     int binaryno = 0;
     int i = 0;
     while ((n>0))
     {
        int bit = n % 2;
        binaryno = bit*pow(10, i++) + binaryno;
        n =n/2;
     }
       return binaryno; 
}


int decimalToBinaryMethod_2(int n){
     //Bitwise Method
     int binaryno = 0;
     int i = 0;
     while (n>0)
     {
      //right shift 
        int bit = (n & 1);
        binaryno = bit*pow(10, i++) + binaryno;
        n =n >> 1;
     }
       return binaryno; 
}


int main(){
  
  // int n;
  // cin>> n;
  // int binary = decimalToBinaryMethod_1(n);
  // cout<<binary <<endl;


    int n;
  cin>> n;
  int binary = decimalToBinaryMethod_2(n);
  cout<<binary <<endl;
}