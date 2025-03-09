#include <iostream>
using namespace std;
int main ()
{
	int n;cin >> n;
	for (int i=0;i<n;i++)
	{
		string s;cin >> s;
	for (int j=s.size()-1;j>=0;j--)
	{
	if (s[j]=='q')
	cout << 'p';
	else if (s[j]=='p')
	cout << 'q';
	else 
	cout << 'w';	
		
		
	}
	cout << endl;	
	}
	
	
}