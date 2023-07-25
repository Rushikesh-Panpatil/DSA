#include<iostream>
using namespace std ; 


char getresult (int marks){
    // if (marks>=90)
    // return 'A';
    // else if (marks>=80)
    // return 'B';
    // else if (marks >= 70)
    // return 'c';
    // else if (marks>=60)
    // return 'D';
    // else 
    // return 'f';
    
    switch (marks/10)
    {
    case 10:
    case 9:return 'A';break;
    case 8:return 'b';break;
    case 7:return 'c';break;
    case 6:return 'd';break;
    
    default: return 'E';
        
    }

}


int main(){
//     int marks ;
//     cout<<"enter the marks:"<< endl;
//     cin>>marks;

//    char finalGrade = getresult(marks);
//    cout << finalGrade << endl;

   for(int i=0  ; i<=100; i++){
    char ans = getresult(i);
    cout<<"grade for marks ="<< i << "is "<< ans << endl;
   }
   return 0;

}