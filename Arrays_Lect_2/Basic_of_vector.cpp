#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    //create vector
    vector<int> arr;
    
    //Vector size
    cout << arr.size() <<endl;
   
    // capacity of vector
    cout<< arr.capacity()<< endl;
   
    // How much the vector taking size / compiler dependent thing

    // int ans = (sizeof(arr)/sizeof(int));
    // cout<< ans << endl;

    //insert in vector/araay
    arr.push_back(5);
    arr.push_back(7);

    //printing 
    for(int i=0; i<arr.size(); i++){
        cout<< arr[i] << " ";
    }
    cout<< endl;

    //Remove/ delete the element

    arr.pop_back();

     //printing 
    for(int i=0; i<arr.size(); i++){
        cout<< arr[i] << " ";
    }
    cout<< endl;

    //creating vectore with new technique

    // vector<int> brr(10, -1);
    // //printing capacity and size

    //     cout<< "Size of b "<< brr.size()<< " "<<endl;
    //     cout<< "capacity of b "<< brr.capacity()<< " "<<endl;
     
    //    //printing 

    // for(int i=0; i<brr.size(); i++){
    //     cout<< brr[i] << " ";
    // }
    // cout<< endl;

    //dyanamic array
    int n;
    cout<<"Enter the value of n "<< endl;
    cin>>n;
    
    vector<int> brr(n, -1);
    //printing capacity and size

        cout<< "Size of b "<< brr.size()<< " "<<endl;
        cout<< "capacity of b "<< brr.capacity()<< " "<<endl;
     
       //printing 

    for(int i=0; i<brr.size(); i++){
        cout<< brr[i] << " ";
    }
    cout<< endl;

    //creating vector with another technique
    
    cout<< "Printing crr"<< endl;
    vector<int> crr{10,20,30,40,50};
   
   for(int i=0; i<crr.size(); i++){
    cout<< crr[i] << " ";
   }
   cout<< endl;

//    vector empty(
    cout<<"Vector crr is Empty or not "<<crr.empty() << endl;
    
    vector<int> drr;
        cout<<"Vector drr is Empty or not "<<drr.empty() << endl;

    return 0;
}