#include <iostream>
using namespace std;
int main ()
{
	int n;cin >> n;
	int a[n];
	for (int i=0;i<n;i++)
	{
		cin >> a[i];
		a[i]/=2;
	}
	
	for (int i=0;i<n;i++)
	{
		cout << a[i] << endl;
	}
	return 0;
}