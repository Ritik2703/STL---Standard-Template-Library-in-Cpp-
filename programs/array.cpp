// C++ code to demonstrate working of array, 
// to() and get() 
#include<iostream> 
#include<array> // for array, at() 
#include<tuple> // for get() 
using namespace std; 
int main() 
{ 
	// Initializing the array elements 
	array<int,6> ar = {1, 2, 3, 4, 5, 6}; 

	// Printing array elements using at() 
	cout << "The array elements are (using at()) : "; 
	for ( int i=0; i<6; i++) 
	cout << ar.at(i) << " "; 
	cout << endl; 

	// Printing array elements using get() 
	cout << "The array elements are (using get()) : "; 
	cout << get<0>(ar) << " " << get<1>(ar) << " "; 
	cout << get<2>(ar) << " " << get<3>(ar) << " "; 
	cout << get<4>(ar) << " " << get<5>(ar) << " "; 
	cout << endl; 

	// Printing array elements using operator[] 
	cout << "The array elements are (using operator[]) : "; 
	for ( int i=0; i<6; i++) 
	cout << ar[i] << " "; 
	cout << endl; 

    cout << "First element of array is : "; 
    cout << ar.front() << endl; 
  
    // Printing last element of array 
    cout << "Last element of array is : "; 
    cout << ar.back() << endl; 
    
    cout << "The number of array elements is : "; 
    cout << ar.size() << endl; 
  
    // Printing maximum elements array can hold 
    cout << "Maximum elements array can hold is : "; 
    cout << ar.max_size() << endl;
    
    
     array<int,6> ar1 = {7, 8, 9, 10, 11, 12}; 
  
    // Printing 1st and 2nd array before swapping 
    cout << "The first array elements before swapping are : "; 
    for (int i=0; i<6; i++) 
    cout << ar[i] << " "; 
    cout << endl; 
    cout << "The second array elements before swapping are : "; 
    for (int i=0; i<6; i++) 
    cout << ar1[i] << " "; 
    cout << endl; 
  
    // Swapping ar1 values with ar 
    ar.swap(ar1); 
  
    // Printing 1st and 2nd array after swapping 
    cout << "The first array elements after swapping are : "; 
    for (int i=0; i<6; i++) 
    cout << ar[i] << " "; 
    cout << endl; 
    cout << "The second array elements after swapping are : "; 
    for (int i=0; i<6; i++) 
    cout << ar1[i] << " "; 
    cout << endl; 
    
    ar1.empty()? cout << "Array empty": 
        cout << "Array not empty"; 
    cout << endl; 
  
    // Filling array with 0 
    ar.fill(0); 
  
    // Displaying array after filling 
    cout << "Array after filling operation is : "; 
    for ( int i=0; i<6; i++) 
        cout << ar[i] << " "; 
        
        
	return 0; 

} 

