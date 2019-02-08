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

void travel(int i, int j);

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
            scanf("%c", &cell);
        }

        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                if (visited[i][j] || !pixels[i][j]) continue;

                travel(i, j);
                no_wars++;
            }
        }

        printf("Image number %d contains %d war eagles.\n", img_number, no_wars);
    }
    
    return 0;
}

void travel(int i, int j){
    if (i >= N || j >= N || j < 0 || i < 0) return;
    if (visited[i][j] || !pixels[i][j]) return;

    visited[i][j] = 1;
    //  (i-1, j-1)    (i-1, j)  (i-1, j+1)
    //   (i, j-1)      (i,j)     (i, j+1)
    //  (i+1, j-1)    (i+1, j)  (i+1, j+1)

    travel(i, j-1); // LEFT
    travel(i, j+1); // RIGHT

    travel(i-1, j);  // UP
    travel(i-1, j+1); // TOP RIGHT
    travel(i-1, j-1); // TOP LEFT

    travel(i+1, j);  // DOWN
    travel(i+1, j-1); // BOTTOM LEFT
    travel(i+1, j+1); // BOTTOM RIGHT
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
Video Solution (Arabic) []: 

Explanation:
---------------

*/
