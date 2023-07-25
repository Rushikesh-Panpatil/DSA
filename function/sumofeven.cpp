#include<iostream>
using namespace std ; 

// int getsum(int n){
//     int sum=0;
//     for(int i=1; i<=n; i++){
//         sum =sum+1;
//     }
//     return sum;
// }


int getEvenSum(int n) {
	cout << "inside getEveSum Function" << endl;
	cout << "Value of n is " << n << endl;
	
	int sum = 0 ;
	cout << "Initial value of sum is " << sum << endl;
	for(int i = 2; i<=n; i = i + 2) {
		cout << "for value of i: " << i << endl;
		sum = sum + i;
		cout << "sum now become: " << sum << endl;
	}
	cout << "returning sum = " << sum << endl;
	return sum;
}
  // print 1 to n sum 



int main() {
//     int n;
//     cout<< "Entre the value of n"<<endl;
//     cin>>n;

//     int ans = getsum(n);
//     cout<<"sum upto" << n <<"is"<<ans<< endl;

//     return 0;
// }



// sum of even number 


	int n;
	cout << "Enter the value of n " << endl;
	cin >> n;

	cout << "Calling getEvenSum function " << endl;
	int ans = getEvenSum(n);
	cout << "Ebven sum is  " << ans << endl;
	
	return 0;
}