#include <bits/stdc++.h>
/*
Problem: A. Nicholas and Permutation
Link   : https://codeforces.com/problemset/problem/676/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int N, tmp;

int idx_n, idx_1, ans;

int main () {
    fastio;
    
    cin >> N;
    for (int i = 0; i < N; ++i){
        cin >> tmp;
        
        if (tmp == N) idx_n = i;
        else if (tmp == 1) idx_1 = i;
    }
    
    //0->idx_1
    //0->idx_N
    //idx_1->N
    //idx_N->N
        
    ans = max(idx_1, idx_n);
    ans = max(ans, abs(idx_1-N+1));
    ans = max(ans, abs(idx_n-N+1));

    cout << ans << '\n';
    return 0;
}
/*
Sample input:-
-----------------
5
4 5 1 3 2

Sample output:-
-----------------
3

Resources:-
-------------

Explanation:
---------------

*/
