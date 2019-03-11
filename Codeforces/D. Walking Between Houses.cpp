#include <bits/stdc++.h>
/*
Problem: D. Walking Between Houses
Link   : https://codeforces.com/contest/1015/problem/D

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

ll N, K, S;

int main () {
    scanf("%lld %lld %lld\n", &N, &K, &S);

    if (K*(N-1) < S or K > S) {
        puts("NO");
        return 0;
    }

    ll pointer = 1;

    puts("YES");
    for (ll i = 0; i < K; i++){
        ll d = min(S-(K-i)+1, N-1);

        S -= d;
        pointer = (d+pointer > N)? pointer-d : pointer+d;
        
        printf("%lld ", pointer);
    }

    puts("");

    return 0;
}
/*
Sample input:-
-----------------
10 9 45

Sample output:-
-----------------
YES
10 1 10 1 6 7 8 9 10 

Resources:-
-------------

Explanation:
---------------

*/
