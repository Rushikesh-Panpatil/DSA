#include<iostream>
using namespace std;


bool checkEven(int n){
   
    if(/*n%2 == 0*/  (n&1)== 0){
       
        return true; // its an even no.
    }
  else{
    
    return false; // its an odd no.
}  
    
}


int main(){
    int n;
    cin>>n;
    bool isEven = checkEven(n);

    if(isEven){
        cout<< n<<"is Even Number .\n";
    }
    else{
        cout<<n<<"is Odd Number .\n";
    }
}