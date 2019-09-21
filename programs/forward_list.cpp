// C++ code to demonstrate forward list 
// and assign() 
#include<iostream> 
#include<forward_list> 
using namespace std; 

int main() 
{ 
	// Declaring forward list 
	forward_list<int> flist1; 

	// Declaring another forward list 
	forward_list<int> flist2; 

	// Assigning values using assign() 
	flist1.assign({1, 2, 3,4,5,6,7,8}); 

	// Assigning repeating values using assign() 
	// 5 elements with value 10 
	flist2.assign(5, 10); 

	// Displaying forward lists 
	cout << "The elements of first forward list are : "; 
	for (int&a : flist1) 
		cout << a << " "; 
	cout << endl; 
	
	cout << "The elements of second forward list are : "; 
	for (int&b : flist2) 
		cout << b << " "; 
	cout << endl; 
	
	forward_list<int> flist = {10, 20, 30, 40, 50}; 
  
    // Inserting value using push_front() 
    // Inserts 60 at front 
    flist.push_front(60); 
      
    // Displaying the forward list 
    cout << "The forward list after push_front operation : "; 
    for (int&c : flist)  
        cout << c << " "; 
    cout << endl; 
      
    // Inserting value using emplace_front() 
    // Inserts 70 at front 
    flist.emplace_front(70); 
      
    // Displaying the forward list 
    cout << "The forward list after emplace_front operation : "; 
    for (int&c : flist)  
       cout << c << " "; 
    cout << endl; 
      
    // Deleting first value using pop_front() 
    // Pops 70 
    flist.pop_front(); 
      
    // Displaying the forward list 
    cout << "The forward list after pop_front operation : "; 
    for (int&c : flist)  
        cout << c << " "; 
    cout << endl; 
    
     forward_list<int> flist3 = {10, 20, 30} ; 
      
    // Declaring a forward list iterator 
    forward_list<int>::iterator ptr; 
  
    // Inserting value using insert_after() 
    // starts insertion from second position 
    ptr =  flist.insert_after(flist3.begin(), {1, 2, 3}); 
      
    // Displaying the forward list 
    cout << "The forward list after insert_after operation : "; 
    for (int&c : flist3)  
        cout << c << " "; 
    cout << endl; 
      
    // Inserting value using emplace_after() 
    // inserts 2 after ptr 
    ptr = flist3.emplace_after(ptr,2); 
      
    // Displaying the forward list 
    cout << "The forward list after emplace_after operation : "; 
    for (int&c : flist3)  
        cout << c << " "; 
    cout << endl; 
      
    // Deleting value using erase.after Deleted 2 
    // after ptr 
    ptr = flist3.erase_after(ptr); 
      
    // Displaying the forward list 
    cout << "The forward list after erase_after operation : "; 
    for (int&c : flist3)  
        cout << c << " "; 
    cout << endl; 
    
      flist.remove(40); 
      
    // Displaying the forward list 
    cout << "The forward list after remove operation : "; 
    for (int&c : flist)  
        cout << c << " "; 
    cout << endl; 
      
    // Removing according to condition. Removes  
    // elements greater than 20. Removes 25 and 30 
    flist.remove_if([](int x){ return x>20;}); 
      
    // Displaying the forward list 
    cout << "The forward list after remove_if operation : "; 
    for (int&c : flist)  
       cout << c << " "; 
    cout << endl; 
    
       flist2.splice_after(flist2.begin(),flist1); 
      
    // Displaying the forward list 
    cout << "The forward list after splice_after operation : "; 
    for (int&c : flist2)  
       cout << c << " "; 
    cout << endl; 
  

	return 0; 
} 

/*

front()– This function is used to reference the first element of the forward list container.
begin()– begin() function is used to return an iterator pointing to the first element of the forward list container.
end()– end() function is used to return an iterator pointing to the last element of the list container.
cbegin()– Returns a constant iterator pointing to the first element of the forward_list.
cend()– Returns a constant iterator pointing to the past-the-last element of the forward_list.
before_begin()– Returns a iterator which points to the position before the first element of the forward_list.
cbefore_begin()– Returns a constant random access iterator which points to the position before the first element of the forward_list.
max_size()– Returns the maximum number of elements can be held by forward_list.
resize()– Changes the size of forward_list.
*/

