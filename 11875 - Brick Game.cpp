#include <bits/stdc++.h>
/*
Problem: 11875 - Brick Game
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2986

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

int T, N, age, captin, testcase = 0;

int main () {

    scanf("%d\n", &T);

    while ( T-- ){
        scanf("%d\n", &N);

        for (int i = 0; i < N; ++i){
            scanf("%d", &age);
            if (i == (N-1)/2) captin = age;
        }
        
        printf("Case %d: %d\n", ++testcase, captin);
    }
    
    return 0;
}
/*
Sample input:-
-----------------
2
5 19 17 16 14 12
5 12 14 16 17 18

Sample output:-
-----------------
Case 1: 16
Case 2: 16

Resources:-
-------------

Explanation:
---------------

*/
