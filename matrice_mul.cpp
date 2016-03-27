/*
 Author - Richman Larry Clifford
 
 A program to multiply two n by n matrices
*/

#include <iostream>


using namespace std;

int main()
{
	const int SIZE = 100;
	int mata[SIZE][SIZE];
	int matb[SIZE][SIZE];
	int product[SIZE][SIZE];
	int n;
	
	cout << "Enter the length of the matrix:";
	cin  >> n;
	
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cout << "\nEnter item at position [" << i + 1<< "][" << j + 1 << "] of matrix a:";
			cin  >> mata[i][j];
			
			cout << "\nEnter item at position [" << i + 1<< "][" << j + 1<< "] of matrix b:";
			cin  >> matb[i][j];
		}
	}
	
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			product[i][j] = 0;
			for(int k = 0;k < n;k++)
				product[i][j] += mata[i][k] * matb[k][j];
		}
	}
	
	cout << "\nProduct of the matrices:" << endl;
	for(int i = 0;i < n;i++){
		cout << "[";
		for(int j = 0;j < n;j++)
		    cout << "  " << product[i][j];
		cout << "]" << endl;
		
	}
	
	system("pause");
	return 0;
}
