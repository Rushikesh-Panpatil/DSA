#include<iostream>
using namespace std;
 //not done
int main(){
    int rowCount;
    cout<<"Enter the number of rows: "<<endl;
    cin>>rowCount;

    for(int row=0; row<rowCount; row++){
        int col;
        for(col=0; col<row+1; col++){
            if(col == 0){
                cout<<"* ";
            }
            else{
                cout<<col<<" ";
            }
        }
        col = col - 2;
        // for(; col>0; col--){
        for(; col>=1; col--){
            cout<<col<<" ";
        }
        for(col=1; col<2*row+1; col++){
            if(col == 2*row){
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}





