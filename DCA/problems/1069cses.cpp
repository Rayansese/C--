// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;
// int main ()
// {
// 	int a=0,c=0,g=0,t=0;
// 	string str;
// 	cin >> str;
// 	for(int i=0;i<str.size();i++)
// 	{
// 		if
// (str[i]=='A'&&(str[i+1]=='A'||i==str.size()-1))
// 		a++;
// 		else if (str[i]=='C'&&(str[i+1]=='C'||i==str.size()-1))
// 		c++;
// 		else if 
// (str[i]=='G'&&(str[i+1]=='G'||i==str.size()-1))
// 		g++;
// 		else if (str[i]=='T'&&(str[i+1]=='T'||i==str.size()-1))
		
		
// t++;
// 	}
	
// 	cout << max(max(a,c),max(g,t));
// }

 #include <iostream>
 #include <string>
 #include <algorithm>
 using namespace std;
 int main ()
 {
 	int a=0,c=0,g=0,t=0;
	string str;
cin >> str;
	for(int i=0;i<str.size();i++)
 	{
 		if
 (str[i]=='A'&&(str[i+1]=='A'||i==str.size()-1||str[i-1]=='A'))
 {
	a++;
	c=0;
	g=0;
	t=0;
 }

 		else if (str[i]=='C'&&(str[i+1]=='C'||i==str.size()-1||str[i-1]=='C'))
		{
			c++;		
			a=0;
			g=0;
			t=0;
		}

		else if 
 (str[i]=='G'&&(str[i+1]=='G'||i==str.size()-1||str[i-1]=='G'))
 {
			g++;
			a=0;
			c=0;
			t=0;
 }

else if (str[i]=='T'&&(str[i+1]=='T'||i==str.size()-1||str[i-1]=='T')){
	t++;
	c=0;
	g=0;
	a=0;
 }
     }
     
     cout << max(max(a,c),max(g,t));
 }
