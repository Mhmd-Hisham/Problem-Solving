#include <bits/stdc++.h>
/*
Problem: 352 - The Seasonal War
Link   : https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=288

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N, img_number = 0, no_wars = 0;
bool pixels[25][25] = {}, visited[25][25] = {};
char cell;

void dfs(int i, int j){
    if (i >= N || j >= N || j < 0 || i < 0) return;
    if (visited[i][j] || !pixels[i][j]) return;

    visited[i][j] = 1;
    //  (i-1, j-1)    (i-1, j)  (i-1, j+1)
    //   (i, j-1)      (i,j)     (i, j+1)
    //  (i+1, j-1)    (i+1, j)  (i+1, j+1)

    dfs(i, j-1); // LEFT
    dfs(i, j+1); // RIGHT

    dfs(i-1, j);  // UP
    dfs(i-1, j+1); // TOP RIGHT
    dfs(i-1, j-1); // TOP LEFT

    dfs(i+1, j);  // DOWN
    dfs(i+1, j-1); // BOTTOM LEFT
    dfs(i+1, j+1); // BOTTOM RIGHT
}

int main () {

    while ( scanf("%d\n", &N) != EOF ){
        img_number++;
        no_wars = 0;

        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                scanf("%c", &cell);
                pixels[i][j] = (bool)(cell-'0');

                visited[i][j] = 0;           // initialization
            }
            scanf("%c", &cell);              // for '\n' at the end;
        }

        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                if (visited[i][j] || !pixels[i][j]) continue;

                dfs(i, j);
                no_wars++;
            }
        }

        printf("Image number %d contains %d war eagles.\n", img_number, no_wars);
    }
    
    return 0;
}

/*
Sample input:-
-----------------
6
100100
001010
000000
110000
111000
010100
8
01100101
01000001
00011000
00000010
11000011
10100010
10000001
01100000

Sample output:-
-----------------
Image number 1 contains 3 war eagles.
Image number 2 contains 6 war eagles.

Resources:-
-------------
Video Solution (Arabic) [C++] [Eng Mohamed Nasser]: https://www.youtube.com/watch?v=-nRiMjHEIUg

Explanation:
---------------

*/
