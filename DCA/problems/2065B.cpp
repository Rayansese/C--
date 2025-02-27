#include <iostream>
using namespace std;
int main ()
{
	int n;cin >> n;
	for (int i=0;i<n;i++)
	{
string s;
cin >> s;
for (int j=0;j<s.size();j++)	
{
if (s[j]==s[j+1])
{
	cout << "1";
	break;	
}

	
}
cout << s.size();	
}

}