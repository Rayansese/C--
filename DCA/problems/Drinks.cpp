#include <iostream>
using namespace std;
int main ()
{
	int n;cin >> n;
	double long sum=0;
	for (int i=0;i<n;i++)
	{
		double long x;cin >>x;
		sum+=x;
	}
	cout << sum/n ;//*1.0;
}