#include<iostream>
using namespace std ;
int main (){
    int arr [500];


     
    int n;
    cout<< "How Many numbers you want to add in array"<< endl;  
    cin>> n;

 // taking input 

    cout<< " Entre the numbers"<<endl;
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }

    //printing doubles
    cout<<"Doubles:";
    for(int i=0; i<n; i++){
        cout<< 2 * arr[i] << " ";
    }
    return 0;
}