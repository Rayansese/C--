#include <iostream>
using namespace std;
int main ()
{
	int n,t,sum=0;cin >> n >> t;	
	int arr[n];
	for (int i=0;i<n;i++)
	{
		cin >> arr[i];
		
	}
	int a=0,maxbooks=0;
	for (int b=0;b<n;b++)
	{
		sum+=arr[b];
		while (sum>t)
		{
			sum-=arr[a];
			a++;
		}
		
maxbooks=max(maxbooks,b-a+1);
		
	}
	
	cout << maxbooks;
}