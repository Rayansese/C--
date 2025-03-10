#include <bits/stdc++.h>

using namespace std;
int main () {

int n;cin >> n;
for (int i=0;i<n;i++)
{
    int a,x;
    cin >> a >> x;
    vector<int>vec,v;
    for (int j=0;j<a;j++)
    {
        cin >> vec[j];
    }
    if (n%2==0)
    {
        while (n>2)
        {
for (int k=0;k<n/2;k++)
{

v[0]+=vec[k];



}
v[0]=v[0]/(n/2);
for (int k=n/2+1;k<n;k++)
{

v[1]+=vec[k];



}

v[1]=v[1]/(n/2);
vec=v;
n=2;
    }
    if ((vec[0]=vec[1])/2==x)
    {

        cout << "YES" ;
        break;
    }
}

}











return 0;
}

