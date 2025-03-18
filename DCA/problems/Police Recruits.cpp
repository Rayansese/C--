#include <iostream>
#include <unordered_set>
using namespace std;
int main ()
{
//	int a,b;
//	unordered_set<>
int n;cin >> n;
int a=0,b=0,c,sum=0;
for (int i=0;i<n;i++)
{
	cin >> c;
	if (c<=-1)
	{
	if (a+c>=0)
	{
		a-=abs(c);
			
			
	}
	else 
	{
	sum+=abs(c);		
	}
			
		
	}
	else if (c>=1) 
	{
		a+=c;
		
	}
	
		
			
}	
	cout << sum;
	return 0;
}