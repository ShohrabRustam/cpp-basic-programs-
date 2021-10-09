 
// in Linear Sear 
#include <iostream>
using namespace std; 
void findElement(int arr[], int size, int key) 
{ 
	// loop to traverse array and search for key 
	for (int i = 0; i < size; i++) { 
		if (arr[i] == key) { 
			cout<<"Element found at position:"<< (i + 1)<<endl; 

			// using break to terminate loop execution 
			break; 
		} 
	} 
} 

int main() { 
	int arr[] = { 1, 2, 3, 4, 5, 6 }; 
	
	// no of elements 
	int n = 6; 
	
	// key to be searched 
	int key = 3; 

	// Calling function to find the key 
	findElement(arr, n, key); 

	return 0; 
} 
