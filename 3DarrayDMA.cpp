// C++ program to dynamically allocate
// the memory for 3D array in C++
// using new operator
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	// Dimensions of the array
	int m, n;
	cout<<"Enter the no. of rows and column :"<<endl;
	cin>>m>>n;

	// Declare memory block of size M
	int** a = new int*[m];

	for (int i = 0; i < m; i++) {

		// Declare a memory block
		// of size n
		a[i] = new int[n];
	}
	cout<<"Enter the elements of the array :"<<endl;
	// Traverse the 2D array
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {

			// Assign values to the
			// memory blocks created
			cin>>a[i][j];
		}
	}
	cout<<"\nThe elements of the array are :"<<endl;
	// Traverse the 2D array
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {

			// Print the values of
			// memory blocks created
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	//Delete the array created
	for(int i=0;i<m;i++) //To delete the inner arrays
	delete [] a[i];
	delete [] a;			 //To delete the outer array
							//which contained the pointers
							//of all the inner arrays
	
	return 0;
}
