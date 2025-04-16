#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> vn(n), vm(m);
    for (int i = 0; i < n; i++)
        cin >> vn[i];

    for (int i = 0; i < m; i++)
        cin >> vm[i];

    int a = 0;
    int j = 0;

    for (int i = 0; i < n; i++) {
        while (j < m && vm[j] < vn[i])
            j++;

        int d1 = INT_MAX;
        if (j < m)
            d1 = abs(vn[i] - vm[j]);

        int d2 = INT_MAX;
        if (j > 0)
            d2 = abs(vn[i] - vm[j-1]);

        int min_d = d1;
        if (d2 < min_d)
            min_d = d2;

        if (min_d > a)
            a = min_d;
    }

    cout << a;
    return 0;
}