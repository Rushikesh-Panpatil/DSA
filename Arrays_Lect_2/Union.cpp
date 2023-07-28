#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr[]={1,2,3,8,5};
    int sizea =5;
    int akk[]={4,6,7,9};
    int sizeb =4;

    vector<int> ans ;

    //push all elements of vector arr
    for(int i=0; i<sizea; i++){
        ans.push_back(arr[i]);
    }
    
       //push all elements of vector akk
    for(int i=0; i<sizeb; i++){
        ans.push_back(akk[i]);
    }

    //printing ans
    cout<< "printing ans array"<< endl;
    for(int i =0; i<ans.size(); i++){
        cout<< ans[i]<< " ";
    }
    return 0;
}