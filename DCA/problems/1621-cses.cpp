#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*int findd (int a,int b,int c)
{
	int x = find(a.start(),a.end(),c);
	return x;
	//  》:(
}*/
int main ()
{
	int z,sum=0;
	cin >> z;
	vector<int> vec ;
	for (int i=0;i <z;i++) {
		cin >> vec[i];
	}
	for (int i=0;i< z;i++)
	{
		if (find (vec.begin(),vec.end() ,i) != find(vec.rbegin(),vec.rend(),i))
		{
		sum++;	
		}
		cout << sum;
	}
	
}