#include <bits/stdc++.h>
/*
Problem: B. Burglar and Matches
Link   : https://codeforces.com/contest/16/problem/B

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int M, N;

int freq[11] = {0};
int ai, bi, ans = 0;

int main () {
    fastio;
    
    cin >> N >> M;
    for (int i = 0; i < M; ++i){
        cin >> ai >> bi;
        freq[bi] += ai;
    }
    
    for (int i = 10; (i >= 0) && N; --i){        
        int k = (freq[i] > N)? N : freq[i];
        ans += k*i;
        N -= k;
    }
    
    cout << ans << '\n';

    return 0;
}
/*
Sample input:-
-----------------
7 3
5 10
2 5
3 6

Sample output:-
-----------------
7

Resources:-
-------------

Explanation:
---------------

*/
