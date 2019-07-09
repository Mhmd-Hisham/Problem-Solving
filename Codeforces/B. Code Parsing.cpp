#include <bits/stdc++.h>
/*
Problem: B. Code Parsing
Link   : https://codeforces.com/problemset/problem/255/B

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

string s;
int xcount = 0, ycount = 0;

int main () {
    fastio;
    
    cin >> s;
    
    for (auto ch : s)
        if (ch=='x') xcount++;
        else ycount++;
    
    string ans;
    if (xcount > ycount) ans = string(xcount-ycount, 'x');
    else ans = string(ycount-xcount, 'y');

    cout << ans << '\n';

    return 0;
}
/*
Sample input:-
-----------------
yxyxy

Sample output:-
-----------------
y

Resources:-
-------------

Explanation:
---------------

*/
