#include <bits/stdc++.h>
/*
Problem: 10346 - Peter's Smokes
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1287

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

int N, K, cigarettes;

int main () {
    
    while ( scanf("%d%d", &N, &K) != EOF ){

        cigarettes = N;

        while ( N/K ){
            cigarettes += N/K;
            N = N/K + N%K;
        }
        
        printf("%d\n", cigarettes);
    }
    
    return 0;
}
/*
Sample input:-
-----------------
4 3
10 3
100 5

Sample output:-
-----------------
5
14
124

Resources:-
-------------

Explanation:
---------------

*/
