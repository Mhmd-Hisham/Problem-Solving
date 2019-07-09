#include <bits/stdc++.h>
/*
Problem: A. Ultra-Fast Mathematician
Link   : https://codeforces.com/problemset/problem/61/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

string s1, s2, ans = "";

int main () {
    fastio;
    
    cin >> s1 >> s2;
    
    for (int i = 0; i < s1.size(); ++i)
        ans += to_string(s1[i]^s2[i]);
    
    
    cout << ans << endl;
    
    return 0;
}
/*
Sample input:-
-----------------
01110
01100

Sample output:-
-----------------
00010

Resources:-
-------------

Explanation:
---------------

*/
