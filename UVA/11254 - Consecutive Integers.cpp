#include <bits/stdc++.h>
/*
Problem: 11254 - Consecutive Integers
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2221

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

ll N;

int main () {

    while ( scanf("%lld\n", &N) && N != -1 ){
        
        ll Xans = N, Yans = N, last_series_len = 0;
        ll N2 = 2*N, L, R, X, Y;
        // N = X + ... + Y
        // (X+Y)*(Y-X+1)/2 = N (arithmetic series sum formula)
        // X+Y = L, Y-X+1 = R
        // N = L*R
        // L = X + Y
        // R = Y - X + 1
        // Y = (R+L-1)/2
        // X = (L-R+1)/2
        // So now, we need to find L, R, S.T: L*R = 2*N
        
        for (ll i = 2; i * i <= N2; ++i){
            if (N2%i != 0) continue;
            
            L = N2/i, R = i;
            
            Y = (R+L-1)/2;
            X = (L-R+1)/2;
            
            if ((X+Y)*(Y-X+1) == N2 && Y-X+1 > last_series_len){
                Xans = X;
                Yans = Y;
                last_series_len = Y-X+1;
            }
        }

        printf("%lld = %lld + ... + %lld\n", N, Xans, Yans);
        
    }
    
    return 0;
}

/*
Sample input:-
-----------------
8
15
35
-1

Sample output:-
-----------------
8 = 8 + ... + 8
15 = 1 + ... + 5
35 = 2 + ... + 8

Resources:-
-------------

Explanation:
---------------

*/
