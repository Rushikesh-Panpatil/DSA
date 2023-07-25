#include<iostream>
using namespace std ;
//function declaration
int add(int a, int b)
{
     int result =a+b;
     // return is a keyword which is used for stop the execution on the spot
     return result;
}

int main(){
    
    int a;
    cout<<"Entre the value of a" <<endl;
    cin>>a;

    int b;
     cout<<"Entre the value of b" <<endl;
    cin>>b;

    int sum = add(a,b);

    cout<<"Addition result is "<<sum<<endl; 

}


//SECOND STEP
//DECLARATION 
// int add(int a, int b);


// int main(){
    
//     int a;
//     cout<<"Entre the value of a" <<endl;
//     cin>>a;

//     int b;
//      cout<<"Entre the value of b" <<endl;
//     cin>>b;

//     int sum = add(a,b);

//     cout<<"Addition result is "<<sum<<endl; 

// }

// int add(int a, int b)
// {
//      int result =a+b;
//      // return is a keyword which is used for stop the execution on the spot
//      return result;
// }