#include <iostream>

using namespace std;
int main () {
long long x,sum=0;
cin >> x;

for (int i=0;<x;i++) {
    if (i%2==1)
        sum = sum - i;
        else
        sum = sum + i;
}








cout << sum;


return 0;
}

