#include <bits/stdc++.h>
/*
Problem: 441 - Lotto
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=382

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int K, S[14];

int main () {
    scanf("%d\n", &K);

    while ( K ){
        
        for (int i = 0; i < K; i++)
            scanf("%d", &S[i]);
        
        for (int i1 = 0; i1 < K - 5; i1++)
          for (int i2 = i1+1; i2 < K - 4; i2++)
            for (int i3 = i2+1; i3 < K - 3; i3++)
              for (int i4 = i3+1; i4 < K - 2; i4++)
                for (int i5 = i4+1; i5 < K - 1; i5++)
                  for (int i6 = i5+1; i6 < K - 0; i6++)
                    printf("%d %d %d %d %d %d\n", S[i1], S[i2], S[i3], S[i4], S[i5], S[i6]);
        
        scanf("%d\n", &K);
        if (K) printf("\n");
    }
    
    return 0;
}
/*
Sample input:-
-----------------
7 1 2 3 4 5 6 7
8 1 2 3 5 8 13 21 34
0

Sample output:-
-----------------
1 2 3 4 5 6
1 2 3 4 5 7
1 2 3 4 6 7
1 2 3 5 6 7
1 2 4 5 6 7
1 3 4 5 6 7
2 3 4 5 6 7

1 2 3 5 8 13
1 2 3 5 8 21
1 2 3 5 8 34
1 2 3 5 13 21
1 2 3 5 13 34
1 2 3 5 21 34
1 2 3 8 13 21
1 2 3 8 13 34
1 2 3 8 21 34
1 2 3 13 21 34
1 2 5 8 13 21
1 2 5 8 13 34
1 2 5 8 21 34
1 2 5 13 21 34
1 2 8 13 21 34
1 3 5 8 13 21
1 3 5 8 13 34
1 3 5 8 21 34
1 3 5 13 21 34
1 3 8 13 21 34
1 5 8 13 21 34
2 3 5 8 13 21
2 3 5 8 13 34
2 3 5 8 21 34
2 3 5 13 21 34
2 3 8 13 21 34
2 5 8 13 21 34
3 5 8 13 21 34

Resources:-
-------------

Explanation:
---------------

*/
