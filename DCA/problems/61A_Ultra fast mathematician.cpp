#include <bits/stdc++.h>

using namespace std;
int fun (int x,int y)
{
    if ((x==1&&y==0)||x==0&&y==1)
        return 1;
        else
            return 0;
}

int main ()
 {
string x,y;
int a,b;

cin >> x >> y;
for (int i=0;i<x.size();i++)
{

    if (fun(x[i]-'0',y[i]-'0')==1)
        x[i] = '1';

    else
        x[i]='0';
}
/*for (int i=0;i<x.size();i++)
{
    cout << z[i];
}
*/
cout << x;


//https://codeforces.com/problemset/problem/61/A







return 0;
}

