#include <bits/stdc++.h>
/*
Problem: A. Help Vasilisa the Wise 2
Link   : https://codeforces.com/contest/143/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int r1, r2, c1, c2, d1, d2;

int main () {
    scanf("%d%d%d%d%d%d", &r1, &r2, &c1, &c2, &d1, &d2);
    
    int x = (c1-r2+d1)/2;

    if ( x != (c1-r2+d1)/2 ) {printf("-1\n"); return 0;}
    
    int w = d1 - x;
    int z = c1 - x;
    int y = c2 - w;

    if ((w < 1 || x < 1 || z < 1 || y < 1) ||
        (w > 9 || x > 9 || z > 9 || y > 9) ||
        (x == y || x == z || x == w || y == z || y == w || z == w)) {printf("-1\n"); return 0;}

    printf("%d %d\n%d %d\n", x, y, z, w);

    return 0;
}
/*
Sample input:-
-----------------
11 10
13 8
5 16

Sample output:-
-----------------
4 7
9 1

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  Resources:-
-------------
Video solution (Arabic) [Eng John Gamal]: https://www.youtube.com/watch?v=cmMkGSMHTKE

Explanation:
---------------
         ________________________
        |  d1  |  c1 |  c2 |  d2 |
        |      |-----|-----|     |
        |  r1  |  X  |  Y  |     |
        |      |-----|-----|     |
        |  r2  |  Z  |  W  |     |
         ------------------------

Putting it into equations:-
    c1 = X + Z      ----> 1
    c2 = Y + W

    d1 = X + W      ----> 3
    d2 = Z + Y

    r1 = X + Y
    r2 = Z + W      ----> 2

    taking 1-2+3 [c1-r2+d1] 
    X + Z - (Z + W) + X + W = 2X
    so 2X = [c1-r2+d1]
    
    then X = (1/2)[c1-r2+d1]
    we can easily get the rest now as we have X.
    
    d1 = X + W        ------->  W = d1 - X;
    c1 = X + Z        ------->  Z = c1 - X;
    c2 = Y + W        ------->  Y = c2 - W;
    

Now that we have the numbers, we just need to check for the range[1-9], repeating values, and fractions. 
*/
