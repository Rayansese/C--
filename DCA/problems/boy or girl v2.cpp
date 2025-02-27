#include <iostream>
#include <vector>
#include <string>
using namespace std;
int f(vector<char>vec,char c)
{
	for (int j=0;j<vec.size();j++)
	{
		if (vec[j]==c)
		return 0;
		
	}
	return 1;
}
int main ()
{
	string s;
	cin >> s;
	vector<char>vec;
	int sum=0;
	for (int i=0;i< s.size();i++)
	{
		if (f(vec,s[i]))
		{
		vec.push_back(s[i]);
		vec[sum]==s[i];
		sum++;
		}
	}
	if (sum%2==0)
		cout << "CHAT WITH HER!";
	else
		cout << "IGNORE HIM!";
	
	return 0;
}