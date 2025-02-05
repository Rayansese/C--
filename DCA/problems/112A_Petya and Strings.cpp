#include <iostream>
#include<bits/stdc++.h>
#include <cctype>

using namespace std;
string j (string s)
{
    for (int i=0;i<s.size();i++)
    {
        s[i]=tolower(s[i]);
    }
    return s;
}
int main () {

string s1,s2;
bool h;
cin >> s1 >> s2;

s1=j(s1);
s2=j(s2);
if (s1.size()==s2.size())
    {
    for (int i=0;i<s1.size();i++)
        {
        if (s1[i]>s2[i])
        {
            cout << "1";
            return 0;
        }

        else if (s1[i]<s2[i])
        {
        cout << "-1";
           return 0;
        }


        else {
           h=1;
        }


        }
    }
else if(s1.size()>s2.size()) {
    cout << '1';
       return 0;
        }

else if (s1.size()<s2.size()){
     cout << "-1";
        return 0;
        }
if (h)
    cout << "0";




return 0;
}







