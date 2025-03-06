#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
	int n,k=0;cin >> n;
	string s;
	string arr[n];
unordered_map<string , int> m;
	for (int i=0;i<n;i++)
	{
		cin >> s;
		if (m[s]==0)
		{
			arr[k]="OK";
			
			k++;
		}
		
		
	else 
	{
	arr[k]= s+ to_string(m[s]);		k++;
	}	
	m[s]++;	
	}

	for (int i=0;i<k;i++)
	{
		cout << arr[i] << endl;
		
	}


    
    return 0;
}