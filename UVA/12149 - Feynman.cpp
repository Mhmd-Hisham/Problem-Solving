#include <bits/stdc++.h>
/*
Problem: 12149 - Feynman
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3301

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

        printf("%d\n", (N*(N+1)*(2*N + 1))/6 );

    }
    
    return 0;
}
/*
Sample input:-
-----------------
2
1
8
0

Sample output:-
-----------------
5
1
204

Resources:-
-------------

Explanation:

---------------
*/
