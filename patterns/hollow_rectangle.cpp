#include<iostream>
using namespace std ;

int main (){


     //Generic code

     int rowCount , colCount;
     cout << "enter the rowCount"<< endl;
     cin>>rowCount;

     cout << "enter the colCount"<< endl;
     cin>> colCount ;
      
      

     
          //outer Loop
     for ( int row=0; row<rowCount; row=row+1){
        //first row or last row -> print 5 *
            if(row==0 || row ==rowCount-1 )
            {
                for(int col =0; col<colCount; col =col+1){
                cout<< " *" ;
                }
            }
     else{
            //remaining middle rows
            //first star
                 cout << " * ";
               //   spaces
                 for (int i =0; i<colCount-2 ; i=i+1)
         {
                cout<<"  ";
                 }
                 // last star
            cout<< "*" ;
          }
         
        cout<< endl;
     }
   
         






















    //  //outer Loop
    //  for ( int row=0; row<3; row=row+1){
    //     //first row or last row -> print 5 *
    //         if(row==0 || row ==2 )
    //         {
    //             for(int col =0; col<5; col =col+1){
    //             cout<< " *" ;
    //             }
    //         }
    //  else{
    //         //remaining middle rows
    //         //first star
    //              cout << " * ";
    //            //   spaces
    //              for (int col =0; col<3 ; col=col+1)
    //      {
    //             cout<<"  ";
    //              }
    //              // last star
    //         cout<< "*" ;
    //       }
         
    //     cout<< endl;
    //  }
     
}


