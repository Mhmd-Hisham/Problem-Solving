#include <bits/stdc++.h>
/*
Problem: B. Lovely Palindromes
Link   : https://codeforces.com/contest/688/problem/B

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

string N, ans;

int main () {
    fastio;
    
    cin >> N;
    ans += N;
    
    reverse(N.begin(), N.end());

    
    cout << ans + N << '\n';
    
    return 0;
}
/*
Sample input:-
-----------------
1

Sample output:-
-----------------
11

Resources:-
-------------

Explanation:
---------------

*/
