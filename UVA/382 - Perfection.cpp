#include <bits/stdc++.h>
/*
Problem: 382 - Perfection
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=318

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

int N, sum;

int main () {

    printf("PERFECTION OUTPUT\n");    
    while ( scanf("%d ", &N) && N ){
        
        sum = 0;

        for (int i = 1; i*i <= N; ++i)
            if (N%i == 0) sum += i + ((i == N/i)? 0 : N/i);
        
        sum -= N;
        
        printf("%5d  ", N);
        if (sum == N) printf("PERFECT\n");
        else if (sum > N) printf("ABUNDANT\n");
        else printf("DEFICIENT\n");
        
    }
    
    printf("END OF OUTPUT\n");
    
    return 0;
}
/*
Sample input:-
-----------------
15 28 6 56 60000 22 496 0

Sample output:-
-----------------
PERFECTION OUTPUT
15 DEFICIENT
28 PERFECT
6 PERFECT
56 ABUNDANT
60000 ABUNDANT
22 DEFICIENT
496 PERFECT
END OF OUTPUT

Resources:-
-------------

Explanation:
---------------

*/
