#include <bits/stdc++.h>
/*
Problem: 11614 - Etruscan Warriors Never Play Chess
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2661

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

int T;
ull N;

int main () {

    scanf("%d\n", &T);

    while ( T-- ){
        scanf("%llu\n", &N);
        // K(K+1)/2 = N
        // K^2 + K - 2N = 0
        // a = 1, b = 1, c = -2N
        // X = (-b + sqrt(b^2 - 4*a* c)) / 2a
        // K = (-1 + sqrt( 1  - 4*1* -2*N)) / 2*1
        // K = (-1 + sqrt( 1  + 8*N)) / 2
        
        printf("%d\n", (int)((-1+ pow(1 + 8.0*N, .5))/2));
    }
    
    return 0;
}
/*
Sample input:-
-----------------
6
3
6
7
8
9
10

Sample output:-
-----------------
2
3
3
3
3
4

Resources:-
-------------

Explanation:
---------------

*/
