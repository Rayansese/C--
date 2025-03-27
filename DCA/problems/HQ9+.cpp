#include <iostream>
using namespace std;
int main ()
{
	string s;cin >> s;
	bool b=0;
	for (auto it: s)
	{
		if (it =='H'|| it == 'Q'|| it == '9' )
		b=1;
	
	}
	
	if (b)
	cout << "YES";
	else 
	 cout << "NO";
}