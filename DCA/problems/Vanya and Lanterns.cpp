#include <iostream>
#include <vector>
using namespace std;
int main ()
{
	int n,l;cin >> l >> n;
	vector<int>set;
	for(int i=0;i<l;i++)
	{
		int x;
		cin >> x;
		set.push_back(x);
		
	}
	sort(set.rbegin(),set.rend());
//	for (int i=0;i<l;i++)
//	{
//		cout << set[i]<<endl;
//	}
int m=0;
for (int i=0;i<l-1;i++)
{
	m=max(m,set[i]-set[i+1]);
	
}

 m=max(m,set[l-1]-n);
cout <<( m+0.0 )/2;
}