#include <iostream>

using namespace std;
int fun (int x)
{
    if (x==7|| x==4)
       return 1;
       else
        return 0;
}
int main () {
string s;
cout << "hi";
int sum=0;
cin >> s;
//
//
//
//
//
for (int i=0;i<s.size();i++)
{
    if(fun(s[i]-'0')==1)
        sum++;
}


if (fun(sum)==1)
cout << "YES";

else
    cout << "NO";





return 0;
}

