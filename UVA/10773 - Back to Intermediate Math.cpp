#include <bits/stdc++.h>
/*
Problem: 10773 - Back to Intermediate Math
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1714

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

int T, D, V, U, testcase = 0;

int main () {

    scanf("%d", &T);
    
    while ( T-- ){
        scanf("%d%d%d", &D, &V, &U);
        
        printf("Case %d: ", ++testcase);

        double time_diff = D/(double)U - (double)D/sqrt(U*U - V*V);

        if (U-V <= 0 || U == 0 || time_diff == 0) {
            printf("can't determine\n");
            continue;
        }

        
        printf("%.3lf\n", fabs(time_diff));
    }
    
    return 0;
}
/*
Sample input:-
-----------------
3
8 5 6
1 2 3
1 5 6

Sample output:-
-----------------
Case 1: 1.079
Case 2: 0.114
Case 3: 0.135


Resources:-
-------------

Explanation:
---------------

*/
