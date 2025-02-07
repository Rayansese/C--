#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstddef>

using namespace std;
/*int findd (int a,int b,int c)
{
	int x = find(a.start(),a.end(),c);
	return x;
	//  》: */
int main ()
{
	int z;
	int sum=0;
	cin >> z;
	vector<int> vec ;
	for (int i=0 ;i < z;i++) {
		cin >> vec[i];
	}
	for (int i=0;i < z;i++)
	{
		auto x = find (vec.begin(),vec.end() ,i);
		auto h = find (vec.end(),vec.begin(),i); 
		// fix the code

		if ( x==h)
		{
		sum++;	
		}
		
	}
	cout << sum;
	return 0;
}