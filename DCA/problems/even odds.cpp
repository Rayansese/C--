#include <iostream>
using namespace std;
int main ()
{
long long a,b;
cin >> a >> b;
long long indexInEvens,answer;
long long countOdds = (a + 1) / 2;
if(b<=countOdds)
answer = 2 * b - 1;	
else
{
indexInEvens = b - countOdds;
answer = 2 * indexInEvens;	
}
cout << answer;	
	
}