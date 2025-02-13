#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main ()
{

string s;
cin >> s;
int g=0;
//	vector<char>vec[s.size()];
int arr[s]
for (int i=0;i<s.size();i++)
  {
    if (!(i<s.size()-2)){ 
     if (s[i]=='W'&&
     s[i+1]=='U'&&
     s[i+2]=='B')
     {
    // vec[g]=' ';
     
     i+=2;
     g++;
     		}
    }
     		else
     		{
     	//	vec[g]=s[i];
     		g++;
     		}	
  }	
	
	for (int i=0;i<vec.size();i++)
	{
		cout << vec[i];
	}
}