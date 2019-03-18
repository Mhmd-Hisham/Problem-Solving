#include <bits/stdc++.h>
/*
Problem: 11723 - Numbering Roads
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2823

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

int N, R, testcase = 0;
double K;

int main () {
    
    while ( scanf("%d%d", &R, &N) && N ){
        printf("Case %d: ", ++testcase);
        // N + N*(K) >= R
        // so, k = ceil(R/N - 1)
        // 0 <= K <= 26
        K = ceil((double)R/N - 1);
        
        if (K <= 26) printf("%d\n", (int)K);        
        else printf("impossible\n");
    }
    
    return 0;
}
/*
Sample input:-
-----------------
8 5
100 2
0 0

Sample output:-
-----------------
1
impossible

Resources:-
-------------

Explanation:
---------------

*/
