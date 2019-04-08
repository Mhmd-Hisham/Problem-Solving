#include <bits/stdc++.h>
/*
Problem: 616 - Coconuts, Revisited
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=557

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

int N, ans;

int main () {
    
    while ( scanf("%d\n", &N) && N >= 0 ){
        
        ans = 0;
        
        for (int i = ceil(sqrt((double)N)); i > 1; --i){
            
            int K = N, j = 0;
            for (j = 0; j < i; ++j){
                K -= 1;
                if (K%i != 0) break;
                K -= K/i;
            }
            
            if (j == i && K%i == 0) {
                ans = i;
                break;
            }
        }
        
        if (ans) printf("%d coconuts, %d people and 1 monkey\n", N, ans);
        else printf("%d coconuts, no solution\n", N);
        
    }
    
    return 0;
}
/*
Sample input:-
-----------------
25
30
3121
-1

Sample output:-
-----------------
25 coconuts, 3 people and 1 monkey
30 coconuts, no solution
3121 coconuts, 5 people and 1 monkey

Resources:-
-------------


Explanation:
---------------

*/
