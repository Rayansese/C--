#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main ()
{

string s;
cin >> s;
int g=0;
bool spc =0;
//	vector<char>vec[s.size()];
//int arr[s];
for (int i=0;i<s.size();i++)
  {

     if (s[i]=='W'&&
     s[i+1]=='U'&&
     s[i+2]=='B'&&
     i<s.size()-2
     )
     {
 //    arr[g]=' ';
if (!spc)
cout <<" ";
spc=1;
     
     i+=2;
  //   g++;
     		}
   
     		else
     		{
     	//	arr[g]=s[i];
     //		g++;
     cout << s[i];
     spc=0;
     		}	
  
  }
	// for (int i=0;i<vec.size();i++)
	// {
	// 	cout << arr[i];
	// }
}