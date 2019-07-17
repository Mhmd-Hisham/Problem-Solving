#include <bits/stdc++.h>
/*
Problem: 10920 - Spiral Tap
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1861

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int SZ, P;

int main(){
    fastio;
    
    while (scanf("%d%d", &SZ, &P) && (SZ|P)){
        int l = 0, r = 1+SZ/2, u = 1+SZ/2, d = 0;
        
        int p = 1;
        int step = 1;
        
        while (p != P){
            p += step; u+= step;
            if (P<=p) {u-= p-P; break;}
            
            p += step; l+= step;
            if (P<=p) {l-= p-P; break;}
            
            step = min(step+1, SZ-1);
            
            p += step; d+= step;
            if (P<=p) {d-= p-P; break;}
            
            p += step; r+= step;
            if (P<=p) {r-= p-P; break;}
            
            step = min(step+1, SZ-1);
        }
        
        printf("Line = %d, column = %d.\n", abs(u-d), abs(l-r));
    }
    
    return 0;
}
/*
Sample input:-
-----------------
3 1
3 3
3 9
5 9
5 10
0 0

Sample output:-
-----------------
Line = 2, column = 2.
Line = 3, column = 1.
Line = 3, column = 3.
Line = 4, column = 4.
Line = 5, column = 4.

Resources:-
-------------

Explanation:
---------------
5: 13 12 11 10 25
4: 14 3  2  9  24
3: 15 4  1  8  23
2: 16 5  6  7  22
1: 17 18 19 20 21
   --------------
   1  2  3  4  5

    u d l r
    2 0 0 2
    3 0 0 2
    3 0 1 2

*/
