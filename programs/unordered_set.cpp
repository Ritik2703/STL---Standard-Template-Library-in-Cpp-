// C++ program to demonstrate various function of unordered_set 
#include <bits/stdc++.h> 
using namespace std; 
void printDuplicates(int [], int ); 

void printDuplicates(int arr[], int n) 
{ 
    // declaring unordered sets for checking and storing 
    // duplicates 
    unordered_set<int> intSet; 
    unordered_set<int> duplicate; 
  
    // looping through array elements 
    for (int i = 0; i < n; i++) 
    { 
        // if element is not there then insert that 
        if (intSet.find(arr[i]) == intSet.end()) 
            intSet.insert(arr[i]); 
  
        // if element is already there then insert into 
        // duplicate set 
        else
            duplicate.insert(arr[i]); 
    } 
  
    // printing the result 
    cout << "Duplicate item are : "; 
    unordered_set<int> :: iterator itr; 
  
    // iterator itr loops from begin() till end() 
    for (itr = duplicate.begin(); itr != duplicate.end(); itr++) 
        cout << *itr << " "; 
} 
  

int main() 
{ 
	// declaring set for storing string data-type 
	unordered_set <string> stringSet ; 

	// inserting various string, same string will be stored 
	// once in set 

	stringSet.insert("code") ; 
	stringSet.insert("in") ; 
	stringSet.insert("c++") ; 
	stringSet.insert("is") ; 
	stringSet.insert("fast") ; 

	string key = "slow" ; 

	// find returns end iterator if key is not found, 
	// else it returns iterator to that key 

	if (stringSet.find(key) == stringSet.end()) 
		cout << key << " not found" << endl << endl ; 
	else
		cout << "Found " << key << endl << endl ; 

	key = "c++"; 
	if (stringSet.find(key) == stringSet.end()) 
		cout << key << " not found\n" ; 
	else
		cout << "Found " << key << endl ; 

	// now iterating over whole set and printing its 
	// content 
	cout << "\nAll elements : "; 
	unordered_set<string> :: iterator itr; 
	for (itr = stringSet.begin(); itr != stringSet.end(); itr++) 
		cout << (*itr) << endl; 
		
		
    int arr[] = {1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 9, 5}; 
    int n = sizeof(arr) / sizeof(int); 
  
    printDuplicates(arr, n); 
    return 0;

} 

/*

Methods of unordered_set:

insert()– Insert a new {element} in the unordered_set container.
begin()– Return an iterator pointing to the first element in the unordered_set container.
end()– Returns an iterator pointing to the past-the-end-element.
count()– Count occurrences of a particular element in an unordered_set container.
find()– Search for an element in the container.
clear()– Removes all of the elements from an unordered_set and empties it.
cbegin()– Return a const_iterator pointing to the first element in the unordered_set container.
cend()– Return a const_iterator pointing to past-the-end element in the unordered_set container or in one of it’s bucket.
bucket_size()– Returns the total number of elements present in a specific bucket in an unordered_set container.
erase()– Remove either a single element of a range of elements ranging from start(inclusive) to end(exclusive).
size()– Return the number of elements in the unordered_set container.
swap()– Exchange values of two unordered_set containers.
emplace()– Insert an element in an unordered_set container.
max_size()– Returns maximum number of elements that an unordered_set container can hold.
empty()– Check if an unordered_set container is empty or not.
equal_range– Returns range that includes all elements equal to given value.
operator= – Copies (or moves) an unordered_set to another unordered_set and unordered_set::operator= is the corresponding operator function.
hash_function() – This hash function is a unary function which takes asingle argument only and returns a unique value of type size_t based on it.
reserve()– Used to request capacity change of unordered_set.
bucket()– Returns the bucket number of a specific element.
bucket_count() – Returns the total number of buckets present in an unordered_set container.
load_factor()– Returns the current load factor in the unordered_set container.
rehash()– Set the number of buckets in the container of unordered_set to given size or more.
max_load_factor()– Returns(Or sets) the current maximum load factor of the unordered set container.
emplace_hint()– Inserts a new element in the unordered_set only if the value to be inserted is unique, with a given hint.
== operator – The ‘==’ is an operator in C++ STL performs equality comparison operation between two unordered sets and unordered_set::operator== is the corresponding operator function for the same.
key_eq()– Returns a boolean value according to the comparison. It returns the key equivalence comparison predicate used by the unordered_set.
operator!=– The != is a relational operator in C++ STL which compares the equality and inequality between unordered_set containers.
max_bucket_count() – Find the maximum number of buckets that unordered_set can have.

*/
