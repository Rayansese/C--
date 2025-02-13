/*#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
//#include <cstddef>

using namespace std;
/*int findd (int a,int b,int c)
{
	int x = find(a.start(),a.end(),c);
	return x;
	//  》: 
int main ()
{
	int z;
	int sum=0;
	cin >> z;
	vector<int> vec(z) ;
	for (int i=0 ; i < z;i++) {
		cin >> vec[i];
	}
	for (int i=0;i < z;i++)
	{
		auto x = find (vec.begin(),vec.end() ,i);
		auto h = find (vec.rbegin(),vec.rend(),i); 
		// fix the code

		if ( x!=h)
		{
		sum++;	
		}
		
	}
	cout << sum;
	return 0;
}




#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    
    int sum = 0;
    bool found;
    
    for (int i = 0; i < n; i++) {
        found = false;
        
        for (int j = 0; j < i; j++) {
            if (numbers[i] == numbers[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            sum++;
        }
    }

    cout << sum << endl;
    return 0;
}*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    int unique_count = 1;
    for (int i = 1; i < n; i++) {
        if (vec[i] != vec[i - 1]) {
            unique_count++;
        }
    }

    cout << unique_count << endl;

    return 0;
}