#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c=1;
    for(int row=0; row<n; row++){
        for(int col =0; col<=row; col++){
            cout<<c;
            c++;
            if(col<row){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    //cout<<"C:"<<c<< endl;
    //shriking phase 
    int start=c-n;
    for(int i=0; i<n; i++){
        int k=start;
        for(int j=0; j<=n-i-1; j++){
            cout<<k;
            k++;
            if(j<n-i-1){
                cout<<"*";
            }
        }
        start=start-(n-i-1);
        cout<<endl;
    }
}