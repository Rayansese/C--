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
*/




#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> unique_numbers;  // لإنشاء مجموعة تخزن القيم الفريدة فقط

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        unique_numbers.insert(num);  // يتم إضافة كل رقم إلى المجموعة
    }

    cout << unique_numbers.size() << endl;  // عدد العناصر الفريدة
    return 0;
}