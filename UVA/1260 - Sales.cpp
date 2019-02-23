#include <bits/stdc++.h>
/*
Problem: 1260 - Sales
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3701

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int T, N;
int sales[1001];

int main () {
    scanf("%d\n", &T);
    
    while ( T-- ){
        int b_sum = 0;
        scanf("%d\n", &N);
        
        for (int i = 0; i < N; i++)
            scanf("%d", &sales[i]);
        
        for (int i = 1; i < N; i++)
            for (int j = 0; j < i; j++)
                if (sales[j] <= sales[i]) b_sum++;
        
        printf("%d\n", b_sum);
    }

    return 0;
}
/*
Sample input:-
-----------------
2
5
38 111 102 111 177
8
276 284 103 439 452 276 452 398

Sample output:-
-----------------
9
20

Resources:-
-------------

Explanation:
---------------

*/
