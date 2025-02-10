#include <iostream>
using namespace std;
int main()
{
	int a = 0, b = 0;
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++)
	{
		if (i < str.size() - 1)
		{
			if (str[i] == str[i + 1] )
			{
				a++;
				if (a > b)
					b = a;
			}
			else if (str[i]== str[i-1])
			{
			b++;
			a=0;
			}
			else
				a = 0;
		}
		else
		{
			if (str[i] == str[i - 1])
			{
				a++;
				if (a > b)
					b = a;
			}
		}
	}
	if (b==0)
	cout << "1";
	else
	cout << b;
	return 0;
}