//#include <bits/stdc++.h>

//using namespace std;
//int main () {

//string s,s1 ;cin >> s;
//for (int i = 0; i <s.size(); i++) {
//s1[i]= to_string( min(stoi(s[i]) , abs(stoi(s[i]) -9 )));
//s= stoi(s[i]) -9 ;

//}



//cout << s;








//return 0;
//}


#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int a, b;

    for (int i = 0; i < s.size(); i++) {
        a = s[i] - '0'; 
        b = 9 - a;

        
        if (b < a && !(i == 0 && a == 9)) {
            s[i] = b + '0';
        }
    }

    cout << s << endl;
    return 0;
}