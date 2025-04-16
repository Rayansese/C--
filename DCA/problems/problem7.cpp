#include <iostream>
#include <utility>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int n; 
    cin >> n;
    for (int i = 0; i < n; i++) {
        pair<float, float> o, p, a, b;
        cin >> p.first >> p.second;
        cin >> a.first >> a.second;
        cin >> b.first >> b.second;
        
        o.first = 0;
        o.second = 0;
        
        double d1 = sqrt(a.first * a.first + a.second * a.second); 
        double d2 = sqrt(b.first * b.first + b.second * b.second); 
        double d3 = sqrt((a.first - p.first) * (a.first - p.first) + (a.second - p.second) * (a.second - p.second)); 
        double d4 = sqrt((b.first - p.first) * (b.first - p.first) + (b.second - p.second) * (b.second - p.second)); 
        double d5 = sqrt((a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second)); 
        
        double w = max({min(d1, d2), min(d3, d4), d5 / 2.0});
cout << w<<endl;
    }
    return 0;
}