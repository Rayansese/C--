#include <bits/stdc++.h>

using namespace std;
int main () {
    //Next round
int n,k,sum=0;
cin >> n >> k;
int arr [n];

for (int i=0;i<n;i++)
{
    cin >> arr[i] ;

}
sort (arr,arr+n);
reverse(arr,arr+n);
for (int i=0;i<n;i++)
{
 if (arr[i]>=arr[k-1])
    {


    if (arr[i]>0)
    sum++;

    }
else
    break;
}
cout << sum;









return 0;
}

