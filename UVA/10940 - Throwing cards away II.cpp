#include <bits/stdc++.h>
/*
Problem: 10940 - Throwing cards away II
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1881

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

int N;

int main () {
    
    while ( scanf("%d\n", &N) && N ){
        
        int k = (int)log2(N); //MSB pos
        int ans = (N%(1<<k))<<1;
        
        printf("%d\n", ans? ans : N);
    }

    return 0;
}
/*
Sample input:-
-----------------
7
19
10
6
0

Sample output:-
-----------------
6
6
4
4


Resources:-
-------------

Explanation:
---------------

*/
