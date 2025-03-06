#include <bits/stdc++.h>

using namespace std;
int main () {
int n;cin >> n;
string s,s1;
for (int i=0;i<n;i++)
{

cin >> s;
 char arr [s.size()-1];
for (int j=0;j<s.size()-2;j++)
{
//s1[j]=s[j];
arr[j]=s[j];

}
for (int k=0;k<s.size()-2;k++)
{
cout << arr[k];

}
cout << 'i'<< endl ;



}

return 0;
}