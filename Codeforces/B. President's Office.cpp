#include <bits/stdc++.h>
/*
Problem: B. President's Office
Link   : https://codeforces.com/contest/6/problem/B

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int N, M;
char C;
char matrix[100][100], devnull;

int freq[123] = {0}, ans = 0;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

bool valid(int i, int j);

int main () {
    fastio;
    
    scanf("%d %d %c\n", &N, &M, &C);

    for (int i = 0; i < N; ++i){
       for (int j = 0; j < M; ++j){
            scanf("%c", &matrix[i][j]);
        }
        scanf("%c", &devnull);
    }
    
    for (int i = 0; i < N; ++i){
       for (int j = 0; j < M; ++j){
            if (matrix[i][j] != C) continue;
            
            for (int k = 0; k < 4; k++){
                int x = i+dx[k], y = j+dy[k];

                if (!valid(x, y)) continue;
                if (matrix[x][y] == '.' || matrix[x][y] == C) continue;

                if (freq[(int)matrix[x][y]] == 0){
                    freq[(int)matrix[x][y]]++;
                    ans++;
                }
            }
        }     
    }
    
    printf("%d\n", ans);
        
    return 0;
}

bool valid(int i, int j){
    return (((i < N) && (i >= 0)) && ((j < M) && (j >= 0)));
}

/*
Sample input:-
-----------------
3 4 R
G.B.
.RR.
TTT.

Sample output:-
-----------------
2

Resources:-
-------------

Explanation:
---------------

*/
