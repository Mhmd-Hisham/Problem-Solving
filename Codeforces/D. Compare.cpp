#include <bits/stdc++.h>
/*
Problem: D. Compare
Link   : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

string s1, s2;

int main () {
    fastio;
    
    
    cin >> s1 >> s2;
    
    
    if (s1<s2) cout << s1 << endl;
    else cout << s2 << endl;

    return 0;
}
/*
Sample input:-
-----------------
acm
acpc

Sample output:-
-----------------
acm

Resources:-
-------------

Explanation:
---------------

*/
