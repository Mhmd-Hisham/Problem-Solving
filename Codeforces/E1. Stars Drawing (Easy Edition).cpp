#include <bits/stdc++.h>
/*
Problem: E1. Stars Drawing (Easy Edition)
Link   : https://codeforces.com/contest/1015/problem/E1

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

int N, M, uncovered = 0;
char grid[100][100], ch;

int star_i[10001], star_j[10001], star_w[10001], idx = 0;

int main () {
    scanf("%d %d\n", &N, &M);
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            scanf("%c", &grid[i][j]);
            if (grid[i][j] == '*') uncovered++;
            else grid[i][j] = 0;
        }
        scanf("%c", &ch);
    }
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            if (!grid[i][j]) continue;

            int v = 1, h = 1;

            while (j+h < M && j-h >= 0 && grid[i][j-h] && grid[i][j+h]) h++;
            while (i+v < N && i-v >= 0 && grid[i-v][j] && grid[i+v][j]) v++;

            int width = min(v, h)-1;
            
            if (width){
                uncovered -= (grid[i][j] == '*');
                grid[i][j] = '+';

                for (int k = 1; k <= width; k++){
                    uncovered -= (grid[i][j+k] == '*') + (grid[i][j-k] == '*');
                    uncovered -= (grid[i+k][j] == '*') + (grid[i-k][j] == '*');

                    grid[i][j+k] = grid[i][j-k] = '+';                    
                    grid[i+k][j] = grid[i-k][j] = '+';
                }
                
                star_i[idx] = i+1;
                star_j[idx] = j+1;
                star_w[idx] = width;
                
                idx++;
            }
        }
    }
    
    if (uncovered <= 0){
        printf("%d\n", idx);
        
        for (int i = 0; i < idx; i++)
            printf("%d %d %d\n", star_i[i], star_j[i], star_w[i]);
    }
    
    else puts("-1");
    
    return 0;
}
/*
Sample input:-
-----------------
6 8
....*...
...**...
..*****.
...**...
....*...
........

Sample output:-
-----------------
3
3 4 1
3 5 2
3 5 1

Resources:-
-------------

Explanation:
---------------

*/
