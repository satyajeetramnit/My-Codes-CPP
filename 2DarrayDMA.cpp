// C++ program to dynamically allocate
// the memory for 2D array in C++
// using new operator
#include <iostream>
using namespace std;

int main()
{
	// Dimensions of the 2D array
	int m, n;
	cout<<"Enter the no. of rows and column :"<<endl;
	cin>>m>>n;

	// Declare a memory block of
	// size m*n
	int* arr = new int[m * n];

	cout<<"Enter the elements of the array :"<<endl;
	// Traverse the 2D array
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {

			// Assign values to
			// the memory block
			cin>>*(arr + i * n + j);
		}
	}

	cout<<"\nThe elements of the array are :"<<endl;
	// Traverse the 2D array
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {

			// Print values of the
			// memory block
			cout << *(arr + i * n + j)
				<< " ";
		}
		cout << endl;
	}

	//Delete the array created
	delete[] arr;

	return 0;
}
