#include <iostream> 
#include <utility> 
using namespace std; 
  
int main() 
{ 
    pair <int, char> PAIR4 ; 
      pair <string,double> PAIR5 ("GeeksForGeeks", 1.23); 
     pair <string,double> PAIR3;
    
    PAIR4.first = 100; 
    PAIR4.second = 'G' ; 
  
    cout << PAIR4.first << " " ; 
    cout << PAIR4.second << endl ; 
   
    cout << PAIR5.first << " " ; 
    cout << PAIR5.second << endl ; 
  
    PAIR3 = make_pair ("GeeksForGeeks is Best",4.56); 
    
     cout << PAIR3.first << " " ; 
    cout << PAIR3.second << endl ; 
    
     pair<int, int>pair1 = make_pair(1, 12); 
    pair<int, int>pair2 = make_pair(9, 12); 
  
  
    cout << (pair1 == pair2) << endl; 
    cout << (pair1 != pair2) << endl; 
    cout << (pair1 >= pair2) << endl; 
    cout << (pair1 <= pair2) << endl; 
    cout << (pair1 > pair2) << endl; 
    cout << (pair1 < pair2) << endl; 
    
    
    pair<char, int>pair6 = make_pair('A', 1); 
    pair<char, int>pair7 = make_pair('B', 2); 
  
    cout << "Before swapping:\n " ; 
    cout << "Contents of pair1 = " << pair6.first << " " << pair6.second <<" "; 
    cout << "Contents of pair2 = " << pair7.first << " " << pair7.second  ; 
    pair6.swap(pair7); 
  
    cout << "\nAfter swapping:\n "; 
    cout << "Contents of pair1 = " << pair6.first << " " << pair6.second <<" "; 
    cout << "Contents of pair2 = " << pair7.first << " " << pair7.second ; 
    cout<<endl;
    return 0; 
} 
