#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int x; cin >> x;
    int t = x + 1;
    string s = to_string(t);
    vector<char> vec;

    while (true) {
        bool unique = true;
        vec.clear();

        for (int i = 0; i < s.size(); i++) {
            if (find(vec.begin(), vec.end(), s[i]) != vec.end()) {
                unique = false;
                break;
            }
            vec.push_back(s[i]);
        }

        if (unique) {
            cout << t;
            break;
        } else {
            t++;
            s = to_string(t);
        }
    }

    return 0;
}