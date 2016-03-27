/*
  Author - Richman Larry Clifford
  
  A program to convert a number from any base to base 10
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int num,base,result=0,indice = 0;
	
	cout << "Enter number:";
	cin  >> num;
	
	cout << "Enter base of number:";
	cin >> base;
	
	int num_copy = num;
	
	while(num_copy > 0){
		result += (num_copy % 10) * pow(base,indice);
		num_copy /= 10;
		indice += 1;
	}
	
	cout << num << " base " << base << " in base 10 is " << result << endl;
	 
	system("pause");
	return 0;
	
}
