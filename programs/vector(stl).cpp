#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
#define fl for(int i=0;i<n;i++)
#define ll long long int
#define mod 1000000007
using namespace std;
int main()
{
	
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	cin>>a[i];
	vector<ll>v1(a,a+n);
	vector<ll>v2{1,27,3,45,5,16,27,87};

	cout<<"initially vector v1 is "<<endl;
	for(auto w: v1)
	cout<<w<<" ";
	
	cout<<endl;
	
	
	cout<<"initially vector v2 is "<<endl;
	for(auto w: v2)
	cout<<w<<" ";
	
	cout<<endl;
	

	sort(v1.begin(),v1.end());
	
		cout<<"after sorting vector v1 is "<<endl;
			for(auto w: v1)
	cout<<w<<" ";
	
	cout<<endl;
	
	
	sort(v2.begin(),v2.end(),greater<ll>());
	
	cout<<"after sorting vector v2 is "<<endl;
			for(auto w: v2)
	cout<<w<<" ";
	
	cout<<endl;
	
	reverse(v2.begin(),v2.end());
	
		cout<<"after reversing vector v2 is "<<endl;
			for(auto w: v2)
	cout<<w<<" ";
	
	cout<<endl;
	
		ll k= *max_element(v1.begin(),v1.end());
	
	cout<<"maximum element in vector v1 is "<<k<<endl;
	
	
		ll r= *min_element(v2.begin(),v2.end());

    cout<<"minimum element in vector v2 is "<<r<<endl;
    
    cout<<"sum of all elements of vector v1 is "<<accumulate(v1.begin(),v1.end(),0)<<endl;
    cout<<"summation of vector v2 is "<<accumulate(v2.begin(),v2.end(),100)<<endl;
    
     cout<<"count  of 27 in vector v2 is "<<count(v2.begin(),v2.end(),27)<<endl;
     
       find(v2.begin(), v2.end(),3908) != v2.end()? 
                         cout << "\nElement found": 
                     cout << "\nElement not found"<<endl; 

    if(binary_search(v2.begin(),v2.end(),27))
    cout<<"element found";
    else
    cout<<"element not found";
   
    cout<<endl;
    
     
    auto p =lower_bound(v2.begin(),v2.end(),27);
    cout<<"lower bound of 27 is at "<<p-v2.begin()<<endl;
    auto l = upper_bound(v2.begin(),v2.end(),27);
    cout<<"upper bound of 27 is at "<<l-v2.begin()<<endl;
    
    v2.erase(v2.begin()+4);
   
  	cout<<"after erasing 5th elmnt in  vector v2 is "<<endl;
			for(auto w: v2)
	cout<<w<<" ";
	cout<<endl;
	
	v1.erase(unique(v1.begin(),v1.end()),v1.end());
	cout<<"after erasing unique elmnt in  vector v1 is "<<endl;
			for(auto w: v1)
	cout<<w<<" ";
	
	cout<<endl;
	 
	 prev_permutation(v2.begin(),v2.end());
	 	cout<<"previous permutation in  vector v2 is "<<endl;
			for(auto w: v2)
	cout<<w<<" ";
	
	cout<<endl;
	 
	  next_permutation(v1.begin(),v1.end());
	 	cout<<"next permutation in  vector v1 is "<<endl;
			for(auto w: v1)
	cout<<w<<" ";
	
	cout<<endl;
	
	cout << "Distance between first to max element of v1 is : ";  
    cout << distance(v1.begin(), 
                     max_element(v1.begin(), v1.end())); 
                     cout<<endl;
	 
    cout << "Distance between first to max element of v2 is : ";  
    cout << distance(v2.begin(), 
                     max_element(v2.begin(), v2.end())); 
                     cout<<endl;
	return 0;	
}
