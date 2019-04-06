#include <bits/stdc++.h>
/*
Problem: 11805 - Bafana Bafana
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2905

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

int T, N, K, P, ans;
int testcase = 0;

int main () {

    scanf("%d", &T);
    
    while ( T-- ){
        scanf("%d%d%d", &N, &K, &P);
        
        ans = (K+P)%N;
        
        printf("Case %d: %d\n", ++testcase, (ans)? ans : N);
    }

    return 0;
}
/*
Sample input:-
-----------------
3
5 2 5
6 3 5
4 1 3

Sample output:-
-----------------
Case 1: 2
Case 2: 2
Case 3: 4

Resources:-
-------------

Explanation:
---------------

*/
