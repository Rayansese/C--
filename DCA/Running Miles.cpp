#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		int n;
		cin >> n;
		int arr[n];

		for (int i = 0; i < n; i++)
			cin >> arr[i];

		int ans = 0;


		for (int l = 0; l <= n - 3; l++)
		{
			int max1 = -1, max2 = -1, max3 = -1;

			for (int r = l; r < n; r++)
			{
				
				int j = r;
				if (arr[j] > max1)
				{
					max3 = max2;
					max2 = max1;
					max1 = arr[j];
				}
				else if (arr[j] > max2)
				{
					max3 = max2;
					max2 = arr[j];
				}
				else if (arr[j] > max3)
					max3 = arr[j];

	
				if (max3 != -1)
				{
					int idk = max1 + max2 + max3 - (r - l);
					ans = max(ans, idk);
				}
			}
		}
		
		cout << ans << endl;
	}

	return 0;
}