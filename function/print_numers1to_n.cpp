#include<iostream>
using namespace std ;
//n is here parametre
void printCounting(int n){
    for(int i=1; i<=n; i++){
        cout<< i<< endl;
    }
}

int main (){
    int n ;
    cout <<"entre the valur of n"<< endl;
    cin>>n;

    //n is argument
    printCounting(n);

}