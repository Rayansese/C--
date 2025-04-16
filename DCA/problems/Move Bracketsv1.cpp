#include <iostream>
#include <deque>
using namespace std;
int main ()
{
	int n;cin >> n;
	int y=0;
	for (int i=0;i<n;i++)
	{
		int t;cin >> t; 
		deque<char> q ;
		//for (int j=0;j<t;j++)
//		{
//			
//			char c;
//			cin >> c;
//			q.push_back(c);
//		}
for (auto it = q.begin(); it != q.end();it++ )
		{
			char c;cin >> c;
			q.push_back(c);
	if (*it== ')' && *it-1=='(')
			{
			q.erase(it);
			q.erase(it -1);
			}
					
		}
		auto d = q.begin() ;
		int s=q.size()/2;
for (auto j=q.begin();j!=q.begin()+(q.size()/2);j++,d++)
		{
			if (*j ==')')
			{
				q.erase(j);
				q.push_back(')');
				y++;
			}	
			
		}
		for (;d!= q.end();++d)
		{
			if (*d == '(')
			{
				q.erase(d);
				q.push_front(')');
				y++;
			}
		}
		cout << y << endl;
	}
	
}