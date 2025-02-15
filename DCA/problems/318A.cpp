#include <iostream>
#include <vector>
using namespace std;
int main ()
{
	long long a,b;
	cin >> a >> b;
	vector<int>vec;
	int x=1;
	while 
	(
		(
	a%2==0
	&&
	x<=a-1
		)
		||
		a%2==1
		&&
		x<=a
	)
	{
	vec.push_back(x);
	x+=2;
	if (vec.size()>=b)
	{
	cout << vec[b-1];
	return 0;
	}	
	}
	x=2;
		while 
	(
		(
	a%2==0
	&&
	x<=a-1
		)
		||
		a%2==1
		&&
		x<=a
	)
	{
	vec.push_back(x);
	x+=2;
		if (vec.size()>=b)
		{
	cout << vec[b-1];
	return 0;
		}	
	}
cout << vec[b-1];
		return 0;	
}