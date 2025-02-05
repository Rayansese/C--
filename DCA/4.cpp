#include <iostream>
string swap1 (string s)
{
    for (int i=0;i<s.size();i++)
    {
        for (int j=i;j<s.size();j++)
        {
            if (s[i]>s[j])
                swap(s[i],s[j])
        }
        
    }
    return s;
}
using namespace std;

int main () {
string s ="54321";
cout << swap1(s);


return 0;
}

