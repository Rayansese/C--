#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long sum = 0;
    for (int i = 0; i < k; i++) {
        sum += a[i];
    }

    int ind = 0;
    long long min1 = sum;

    for (int i = 1; i <= n - k; i++) {
        sum = sum - a[i - 1] + a[i + k - 1];
        if (sum < min1) {
            min1 = sum;
            ind = i;
        }
    }

    cout << ind + 1;
    return 0;
}