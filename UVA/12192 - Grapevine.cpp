#include <bits/stdc++.h>
/*
Problem: 12192 - Grapevine
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3344

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int M, N, Q, L, R;
int grid[501][501];

int main () {
    fastio;
    
    while ( cin >> N >> M && N && M ){
        
        for (int i = 0; i < N; ++i){
            for (int j = 0; j < M; ++j){
                cin >> grid[i][j];
            }
        }
        
        cin >> Q;
        
        while (Q--){
            cin >> L >> R;
            
            int ans = 0;

            for (int i = 0; i < N; ++i){
                int pos = lower_bound(grid[i], grid[i]+M, L) - grid[i];                
                if (pos == M) continue; // not found
                
                int tmp = 0;
                int x = i, y = pos;
                while (x < N && y < M){
                    if (grid[x][y] <= R) tmp++;
                    x++, y++;
                }
                
                ans = max(ans, tmp);
            }
            
            cout << ans << '\n';
        }
        
        cout << "-\n";
    }

    return 0;
}
/*
Sample input:-
-----------------
4 5
13 21 25 33 34
16 21 33 35 35
16 33 33 45 50
23 51 66 83 93
3
22 90
33 35
20 100
4 4
1 7 9 11
5 8 10 12
7 10 15 17
11 19 30 41
4
6 20
7 9
10 10
13 14
0 0


Sample output:-
-----------------
3
2
4
-
3
1
1
0
-


Resources:-
-------------

Explanation:
---------------

*/
