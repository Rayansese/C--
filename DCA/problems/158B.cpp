//#include <iostream>
//using namespace std;
//int main ()
//{
//	int n,sum=0;cin >> n;
//	for (int i=0;i<n;i++)	
//	{
//		int x;cin >>x;
//		 sum+=x;
//	}
//	
//	if (sum%4==0)
//	cout << sum/4;
//	else 
//	cout << sum/4 +1;
//}
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1) count1++;
        else if (x == 2) count2++;
        else if (x == 3) count3++;
        else count4++;
    }
    
    int taxis = count4;
    taxis += count3;
    count1 = max(0, count1 - count3);
    
    taxis += count2 / 2;
    if (count2 % 2) {
        taxis++;
        count1 = max(0, count1 - 2);
    }

    taxis += (count1 + 3) / 4;

    cout << taxis;
}