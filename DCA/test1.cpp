#include <iostream>

using namespace std;
int main () {
int n,x;
char z;
cin >> n >> x;
char arr[n];
for (int i=0;i<n;i++){
    cin >> arr[i];




}
for (int i=0;i<x;i++) {
for (int i=0;i<n-1;i++){
   if (arr[i]=='B'&&arr[i+1]=='G')
    {
        z=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=z;
        i++;
    }



}
}
for (int i=0;i<n;i++){
    cout << arr[i];




}





return 0;
}


