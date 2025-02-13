#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int maxLen = 1, currLen = 1;
    
    for (size_t i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            currLen++;
        } else {
            maxLen = max(maxLen, currLen);
            currLen = 1;
        }
    }
    
    maxLen = max(maxLen, currLen);
    cout << maxLen << endl;
    
    return 0;
}