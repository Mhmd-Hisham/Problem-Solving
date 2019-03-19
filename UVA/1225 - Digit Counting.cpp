#include <bits/stdc++.h>
/*
Problem: 1225 - Digit Counting
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3666

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

int T, N;

int main () {

    scanf("%d", &T);
    while ( T-- ){
        scanf("%d\n", &N);
        
        int f[10] = {}; // frequency array for each digit
        
        for (int i = 1; i <= N; ++i){
            int n = i;

            while ( n ){
                f[n%10]++;
                n /= 10;
            }
        }
        
        printf("%d %d %d %d %d %d %d %d %d %d\n", f[0], f[1], f[2], f[3], f[4], f[5], f[6], f[7], f[8], f[9]);
    }
    
    return 0;
}
/*
Sample input:-
-----------------
2
3
13

Sample output:-
-----------------
0 1 1 1 0 0 0 0 0 0 
1 6 2 2 1 1 1 1 1 1 


Resources:-
-------------

Explanation:
---------------

*/
