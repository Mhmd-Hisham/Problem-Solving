#include <bits/stdc++.h>
/*
Problem: 10102 - The path in the colored field
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1043

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int M;
char ch;

int main () {
    
    while ( scanf("%d\n", &M) != EOF ){
        int grid[M][M];
        int threes[M*M], idx = 0;
        int steps = INT_MAX, min_steps = INT_MIN;

        for (int i = 0; i < M; i++){
            for (int j = 0; j < M; j++){
                scanf("%c", &ch);
                grid[i][j] = ch-'0';

                if (grid[i][j] == 3){
                    threes[idx++] = i;
                    threes[idx++] = j;
                }
            }

            scanf("%c", &ch);
        }

        for (int i = 0; i < M; i++){
            for (int j = 0; j < M; j++){
                if (grid[i][j] != 1) continue;
                
                steps = INT_MAX;
                for (int k = 0; k < idx-1; k+=2){
                    int distance = abs(i-threes[k]) + abs(j-threes[k+1]);
                    steps = min(steps, distance);
                }

                min_steps = max(steps, min_steps);
            }
        }
        
        printf("%d\n", min_steps);
    }

    return 0;
}
/*
Sample input:-
-----------------
4
1223
2123
2213
3212
2
12
33

Sample output:-
-----------------
3
1

Resources:-
-------------

Explanation:
---------------

*/
