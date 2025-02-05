#include <iostream>

using namespace std;
int main () {

int sum =0,n,z;
cin >> n;
for (int i=0;i<n;i++) {
    cin >> z;
    sum+=z;



}
if (sum==0)
    cout << "EASY";
else
    cout << "HARD";

return  0;
}

