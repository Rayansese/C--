#include <iostream>
using namespace std;

bool f(int x) {
    if (x <= 3) return 0;
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0)
        return 1;
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    for (int x = 4; x < n; ++x) {
        int y = n - x;
        if (f(x) && f(y)) {
            cout << x << " " << y;
            return 0;
        }
    }
    return 0;
}