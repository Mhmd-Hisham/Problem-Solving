#include <bits/stdc++.h>
/*
Problem: 11953 - Battleships
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3104

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int T, N;
char grid[101][101];

int battleships = 0, x, test_case = 0;
bool visited[101][101];

void dfs(int i, int j){
    if (i >= N || j >= N || j < 0 || i < 0) return;
    if (visited[i][j] || grid[i][j] == '.') return;
    
    if (grid[i][j] == 'x') x++;
    visited[i][j] = 1;

    dfs(i+1, j);
    dfs(i, j+1);
}

int main () {
    scanf("%d\n", &T);

    while ( T-- ){
        scanf("%d\n", &N);

        battleships = 0;
        test_case++;

        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                scanf("%c", &grid[i][j]);
                visited[i][j] = 0;
            }
            scanf("\n");
        }

        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                if (visited[i][j] || grid[i][j] == '.') continue;
                x = 0;
                dfs(i, j);
                if (x) battleships++;
            }
        }

        printf("Case %d: %d\n", test_case, battleships);
    }

    return 0;
}

/*
Sample input:-
-----------------
2
4
x...
..x.
@.@.
....
2
..
x.

Sample output:-
-----------------
Case 1: 2
Case 1: 3

Resources:-
-------------
Video Solution (Arabic) [Eng Aya Elymany]: https://www.youtube.com/watch?v=nvPucDrmErI

Explanation:
---------------

*/
