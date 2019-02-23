#include <bits/stdc++.h>
/*
Problem: 11565 - Simple Equations
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2612

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int T, A, B, C;

int main () {

    scanf("%d\n", &T);
    
    while ( T-- ){
        scanf("%d %d %d\n", &A, &B, &C);
        int ans[3] = {};
        bool found = false;
        
        for (int x = -100; x <= 100 && !found; x++){
            for (int y = -100; y <= 100 && !found; y++){
                if (x == y) continue;
                
                for (int z = -100; z <= 100 && !found; z++){
                    if ( (x != z && y != z) && ((x+y+z) == A) && ((x*y*z) == B) && ((x*x + y*y + z*z) == C)){
                        ans[0] = x; ans[1] = y; ans[2] = z;
                        sort(ans, ans+3);

                        found = true;
                    }
                }
            }
        }
        
        if (found) printf("%d %d %d\n", ans[0], ans[1], ans[2]);
        else printf("No solution.\n");
    }
    
    return 0;
}
/*
Sample input:-
-----------------
2
1 2 3
6 6 14

Sample output:-
-----------------
No solution.
1 2 3


Resources:-
-------------

Explanation:
---------------

*/
