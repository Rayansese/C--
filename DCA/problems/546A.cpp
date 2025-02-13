#include <iostream>
using namespace std;
int main () {
    int w , n , k;
    cin >> k >> n >> w;
int sum1=0;
    for (int i=1;i<=w;i++)
    {
sum1+=i*k;
    }
    if (sum1 -n > 0)
    cout << sum1 - n;
else 
cout << "0";
}
/*
i*k dollars for i th
w bananas
he has n dollar
 */
