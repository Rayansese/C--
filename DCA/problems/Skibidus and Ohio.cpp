#include <iostream>
using namespace std;
int main ()
{
int n;cin >> n;
for (int i=0;i<n;i++)
{
string s;cin >> s;
bool b=1;
for (int j=0;j<s.size()-1;j++)
	{
		
		if (s[j]==s[j+1])
		b=0;
	
	}
		if (b==0)
		cout << '1' << endl;
		else 
		cout << s.size() << endl;
		
			b=1;
}	
	
	
}