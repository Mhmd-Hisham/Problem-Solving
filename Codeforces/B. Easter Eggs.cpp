#include <bits/stdc++.h>
/*
Problem: B. Easter Eggs
Link   : https://codeforces.com/contest/78/problem/B

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int N;
string colors = "ROYGBIV";

int main () {
    fastio;
    
    cin >> N;
    
    string ans = "";
    
    int idx = 0;
    for (int i = 0; i < N; ++i){
        ans += colors[(idx++)%7];
        if (idx%7 == 0) idx = 3;
    }
    
    cout << ans << endl;

    return 0;
}
/*
Sample input:-
-----------------
8

Sample output:-
-----------------
ROYGBIVG

Resources:-
-------------

Explanation:
---------------

*/
