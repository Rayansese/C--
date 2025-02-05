#include <iostream>
using namespace std;
int main()
{
	int x, y, z,s=0;
	cin >> x >> y >> z;

for (int i=1;i<=z;i++)
{



s+=i*x;


}


if (s-y<=0)
cout << 0;

else
cout <<s-y;
	//	factors(x*y);

	return 0;
}
