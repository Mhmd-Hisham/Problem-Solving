#include <bits/stdc++.h>
/*
Problem: 12455 - Bars
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3886

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

bool possible;
int T, N, P, Ps[21];

int main () {
    scanf("%d\n", &T);
    
    while ( T-- ){
        scanf("%d\n%d\n", &N, &P);
        possible = false;
        
        for (int i = 0; i < P; i++)
            scanf("%d", &Ps[i]);
        
        for (int mask = 0; mask < (1<<P); mask++){
            int len = 0;
            
            for (int i = 0; i < P; i++)
                if (mask & (1<<i)) len += Ps[i];
            
            if (len == N) {possible = true; break;}
        }
        
        printf((possible)? "YES\n" : "NO\n");
    }
    
    return 0;
}
/*
Sample input:-
-----------------
4
25
4
10 12 5 7
925
10
45 15 120 500 235 58 6 12 175 70
120
5
25 25 25 25 25
0
2
13 567

Sample output:-
-----------------
NO
YES
NO
YES

Resources:-
-------------

Explanation:
---------------

*/
