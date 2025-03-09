#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main ()
{
	int n;cin >> n;
	for (int j=0;j<n;j++)
	{
	string s;cin >> s;
	int sum=0,s1;
	
	for (int i=0;i<s.size();i++)
	{
	s1=s[i] - '0';
	//sum+=s%10;
//	s/=10;	
sum+=s1;
			
	}	
	cout << sum << endl;	
	}
	
	
}