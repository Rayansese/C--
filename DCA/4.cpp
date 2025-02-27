// #include <iostream>
// using namespace std;
// int main () {



// string s="7";
// int n=stoi(s)-5;









// return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;
// int main () {

// string s ;cin >> s;
// int n;
// for (int i = 0; i <s.size(); i++) {
// n = min(stoi(s[i]), stoi(abs(s[i] -9)))
// }



// cout << s;








// return 0;
// }

#include <bits/stdc++.h>

using namespace std;
int main () {

string s ;cin >> s;
int a,b;
for (int i = 0; i <s.size(); i++) {
//s1[i]= to_string( min(stoi(to_string(s[i])) ,abs(stoi(to_string(s[i])) -9 )));
//s= stoi(s[i]) -9 ;
// a= stoi(to_string(s[i]));
// b= abs(stoi(to_string(s[i])) -9);
//  if (abs(b)<a) {
//  s[i]= to_string(b)[0];
//  }
// }
a = s[i] - '0';
b = 9 - a;
 if (b<a) {
s[i] = b + '0';

}
}
if (s[0]== '0' && s.size() > 1) {
    s[0] = '9';
}

cout << s;








return 0;
}

