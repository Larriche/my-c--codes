/*
Author - Richman Larry Clifford

A program to find the result when a positive integer is raised
to the power of another positive integer without using pow function
*/

#include <iostream>
using namespace std;

int main()
{
	int base,exp;
	
	cout << "Enter base:";
	cin >> base;
	
	cout << "Enter exponent:";
	cin >> exp;
	
	cout << "The result of " << base << " raised to the power " << exp << " is " ;
	if(exp == 0){
		cout << 1 << endl;
	}
	
	else if(exp == 1){
		cout << base << endl;
	}
	else{
		int result = base;
		for(int i = 1;i <= exp - 1;i++){
			result *= base;
		}
		cout << result << endl;
	}
	
	system("pause");
	return 0;
}
