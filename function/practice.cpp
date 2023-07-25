#include<iostream>
using namespace std ;
int main(){
    // int age;
    // cin>>age;

    // (age>=18) ? cout << "Can Vote" : cout<< " Cannot Vote";

    // return 0;

    int a=5;
    int b = 10;

    int ans1 =(++a) * (--b);
    cout << ans1 << endl;
    int ans2 =(++a) * (b--);
    cout << ans2 << endl; 
    int ans3 =(a++) * (--b);
    cout << ans3 << endl;
    int ans4 =(a++) * (b--);
    cout << ans4 << endl;
}
