#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    vector<int> results;
    
    for (int tc = 0; tc < t; tc++) {
        int k;
        string s;
        cin >> k >> s;
        
        int ops = 0;
        int i = s.size() - 1;
        bool trailingFound = false;
        
        // نتحرّك من النهاية لنشوف إذا في مجموعة واحدات متتالية بالنهاية
        while (i >= 0 && s[i] == '1') {
            trailingFound = true;
            i--;
        }
        if (trailingFound)
            ops++;  // بنعتبر المجموعة الأخيرة عملية وحدة
        
        // بعدين، منعدي باقي السلسلة وبنزيد عملية لكل 1 موجودة
        for (; i >= 0; i--) {
            if (s[i] == '1')
                ops++;
        }
        
        results.push_back(ops);
    }
    
    for (int i = 0; i < results.size(); i++) {
        cout << results[i] << endl;
    }
    
    return 0;
}