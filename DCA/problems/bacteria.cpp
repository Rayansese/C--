#include <iostream>
#include <bitset>
using namespace std;
int main ()
{
	int n;cin >> n;
bitset<16> binary (n);	

int sum=0;
	while (n>0)
	{
		
		sum+= n%2;
		n/=2;
	}
	cout << sum;
	return 0;	
}