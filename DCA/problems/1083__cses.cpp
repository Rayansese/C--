#include <iostream>

using namespace std;
int main () {


long long x,sum=0;
cin >> x;
long long  r [x-1];
for (int i=0;i<x-1;i++)
{
    cin >> r[i];
    sum+=r[i];
}

cout << (x*(x+1)/2) - sum;









return 0;
}

