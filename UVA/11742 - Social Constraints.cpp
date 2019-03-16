#include <bits/stdc++.h>
/*
Problem: 11742 - Social Constraints
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2842

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

int N, M;

bool satisfied;
int a[21], b[21], c[21], teens[8];

int main () {

    while ( scanf("%d %d\n", &N, &M) && N ){
        
        int seats = 0;

        for (int i = 0; i < M; i++)
            scanf("%d %d %d\n", &a[i], &b[i], &c[i]);
        
        for (int i = 0; i < N; i++)
            teens[i] = i;
        
        do {
            satisfied = true;

            for (int i = 0; i < M; i++){
                if (c[i] > 0 && abs(teens[a[i]]-teens[b[i]]) <= c[i]) continue;
                if (c[i] < 0 && abs(teens[a[i]]-teens[b[i]]) >= -c[i]) continue;
                
                satisfied = false;
                break;
            }

            if (satisfied) seats++;
            
        } while (next_permutation(teens, teens+N));
        
        
        printf("%d\n", seats);
    }
    
    return 0;
}
/*
Sample input:-
-----------------
3 1
0 1 -2
3 0
0 0

Sample output:-
-----------------
2
6

Resources:-
-------------

Explanation:
---------------

*/
