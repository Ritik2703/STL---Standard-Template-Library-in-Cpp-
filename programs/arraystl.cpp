#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
int main()
{
	int n,a[100],b[100],c[100];
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	 all_of(a, a+n, [](int x) { return x>0; })? 
          cout << "All are positive elements" : 
          cout << "All are not positive elements"<<endl; 
          
    any_of(a,a+n, [](int x) {return x%2==0; })? cout<<"even hai" : cout<<"nhi hai";
    
    none_of(a,a+n, [](int x){return x<0;})?
    cout<<"+ve" : 
    cout<<"-ve"<<endl;
    copy_n(a,n,b);
    for(int i=0;i<n;i++)
	cout<<b[i];
    iota(c,c+n,27);
     for(int i=0;i<n;i++)
	cout<<c[i];
}
