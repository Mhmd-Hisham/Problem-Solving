#include <bits/stdc++.h>
/*
Problem: 10976 - Fractions Again?!
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1917

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int K;
double y;
int xs[10001], ys[10001], idx = 0;

int main () {
    
    while ( scanf("%d\n", &K) != EOF ){
        idx = 0;
        
        for (int x = K+1; x <= K*2; x++){
            y = x*K;
            y /= (x-K);
            if (y == int(y)){
                xs[idx] = x;
                ys[idx] = (int)y;
                idx++;
            }
        }
        
        printf("%d\n", idx);
        for (int i = 0; i < idx; i++)
            printf("1/%d = 1/%d + 1/%d\n", K, ys[i], xs[i]);
    }
    
    return 0;
}
/*
Sample input:-
-----------------
2
12

Sample output:-
-----------------
2
1/2 = 1/6 + 1/3
1/2 = 1/4 + 1/4
8
1/12 = 1/156 + 1/13
1/12 = 1/84 + 1/14
1/12 = 1/60 + 1/15
1/12 = 1/48 + 1/16
1/12 = 1/36 + 1/18
1/12 = 1/30 + 1/20
1/12 = 1/28 + 1/21
1/12 = 1/24 + 1/24

Resources:-
-------------

Explanation:
---------------

*/
