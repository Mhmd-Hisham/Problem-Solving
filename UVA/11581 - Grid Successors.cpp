#include <bits/stdc++.h>
/*
Problem: 11581 - Grid Successors
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2628

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int T, N;
char grid[3][3];

int dx[] = {0 , 1, 0, -1};
int dy[] = {-1, 0, 1,  0};

bool valid(int i, int j){
    return ((i>=0) && (j>=0) && (i<3) && (j<3));
}

void f(char g[][3]){
    
    char tmp[3][3];

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            tmp[i][j] = g[i][j]-'0';
    

    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
            
            g[i][j] = 0;

            for (int k = 0; k < 4; ++k)
                if (valid(i+dx[k], j+dy[k]))
                    g[i][j] += tmp[i+dx[k]][j+dy[k]];
            
            
            g[i][j] %= 2;
            g[i][j] += '0';
        }
    }
    
}

int main () {
    fastio;

    cin >> T;
    while ( T-- ){
        
        int s = 0;
        
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                cin >> grid[i][j], s+=grid[i][j]-'0';

        int ans = -1;
        
        while (s != 0){
            ans++;
            f(grid);
            
            s = 0;
            
            for (int i = 0; i < 3; ++i)
                for (int j = 0; j < 3; ++j)
                    s += grid[i][j]-'0';

        }
        
        cout << ans << '\n';
    }

    return 0;
}
/*
Sample input:-
-----------------
3
111
100
001
101
000
101
000
000
000

Sample output:-
-----------------
3
0
-1

Resources:-
-------------

Explanation:
---------------

*/
