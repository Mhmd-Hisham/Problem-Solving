#include <bits/stdc++.h>
/*
Problem: 11553 - Grid Game
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2548

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int T, N, grid[8][8];
int score, best_score;

int main () {
    scanf("%d\n", &T);
    
    while ( T-- ){
        scanf("%d\n", &N);
        best_score = INT_MAX;
        
        int alice_moves[N];

        for (int i = 0; i < N; i++)
            alice_moves[i] = i;
                
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                scanf("%d", &grid[i][j]);
        
        do {
            score = 0;
            bool vis[N] = {};

            for (int i = 0; i < N; i++){

                int min_idx = 0, min_value = INT_MAX;
                for (int j = 0; j < N; j++){
                    if ((!vis[j]) && (grid[alice_moves[i]][j] < min_value)){
                        min_value = grid[alice_moves[i]][j];
                        min_idx = j;
                    }
                }
                
                score += min_value;
                vis[min_idx] = 1;
            }
            
            best_score = min(best_score, score);
            
        } while ( next_permutation(alice_moves, alice_moves+N) );
        
        printf("%d\n", best_score);
    }

    return 0;
}
/*
Sample input:-
-----------------
3
2
10 10
-5 -5
2
10 -5
10 -5
2
10 -5
-5 10

Sample output:-
-----------------
5
5
-10


Resources:-
-------------

Explanation:
---------------

*/
