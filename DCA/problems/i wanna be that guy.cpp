#include <iostream>

using namespace std;
int main () {
int p,q,n,sum=0;
cin >> n;
bool a[n] = {};
cin >> p;

for (int i=0;i<p;i++)
{
    int x;
    cin >> x;
    a[x-1] = 1;
}
cin >> q;
for (int i=0;i<q;i++)
{
    int x;
    cin  >> x;
a[x-1]=1;
}
bool found =0;
for (int i=0;i<n;i++)
{
    if (a[i]==0)
    {
        cout << "oh, my keyboard!";
        found = true;
        break;
    }
}
if (!found)
cout << "I become the guy.";


return 0;
}

