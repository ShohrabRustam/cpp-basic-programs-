// C code to implement Fibonacci series 
#include <iostream>
using namespace std; 

// Function for fibonacci 
int fib(int n) 
{ 
	// Stop condition 
	if (n == 0) 
		return 0; 

	// Stop condition 
	if (n == 1 || n == 2) 
		return 1; 

	// Recursion function 
	else
		return (fib(n - 1) + fib(n - 2)); 
} 
int main() 
{ 
	// Initialize variable n. 
	int n = 5; 
	cout<<"Fibonacci seriesof numbers is: "<< n; 

	// for loop to print the fiboancci series. 
	for (int i = 0; i < n; i++) { 
		cout<<fib(i); 
	} 
	return 0; 
} 
