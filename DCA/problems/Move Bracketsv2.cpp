#include <iostream>
#include <deque>
using namespace std;

int main ()
{
	int n;cin >> n;
	for (int i=0;i<n;i++)
	{
		int x;cin >> x;
		deque<char>q (x);
		for (auto it: q)
		{
			char c;cin >> c;
			q.push_back(c);
	if (it== ')' && it-1=='(')
			{
			q.erase(it);
			q.erase(it -1);
			}
					
		}		
	}
	
	
}