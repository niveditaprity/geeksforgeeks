//C++ program to find the count of positive integer of a 
// given number of digits that contain atleast one zero 
#include<bits/stdc++.h> 
using namespace std; 

// Returns count of 'd' digit integers have 0 as a digit 
int findCount(int d) 
{ 
	return 9*(pow(10,d-1) - pow(9,d-1)); 
} 

// Driver Code 
int main() 
{ 
	int d = 1; 
	cout << findCount(d) << endl; 

	d = 2; 
	cout << findCount(d) << endl; 

	d = 4; 
	cout << findCount(d) << endl; 
	return 0; 
} 
