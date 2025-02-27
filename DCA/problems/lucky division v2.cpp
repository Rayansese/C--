#include <iostream>
#include <string>
using namespace std;
int l (int n)
{
	while (n>0)
	{
		if (n%10!=7&&n%10!=4)
		return 0;
		
		n/=10;
	}
	return 1;
}


int main ()
{
	int n;cin >> n;
	
		
	if (l(n)|| n%4==0|| n%7==0)
	cout << "YES";
	else
	cout << "NO";
	
	return 0;
}