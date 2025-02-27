#include <iostream>
using namespace std;
int main ()
{
	int n;cin >> n;
	int a=0,b=0,c=0,d=0;
	bool t=1;
	for (int i=0;i<n;i++)
	{
		int x;
		cin >> x;
		if (x==1)
		a++;
		else if (x==2)
		b++;
		else if (x==3)
		c++;
		else if (x==4)
		d++;
		}
	int sum=0;
	sum+=d;
	
		sum+=c;
		a=max(0,a-c);
		sum+=b/2;
		if (b%2)
		{
		sum++;
		a=max(0,a-2);
		}
	
		if (a%4==0)
		sum+=a/4;
		else 
		sum+=(a/4)+1;
		
		cout << sum;
		return 0;
}