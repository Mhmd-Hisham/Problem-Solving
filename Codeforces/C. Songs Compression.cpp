#include <bits/stdc++.h>
/*
Problem: C. Songs Compression
Link   : https://codeforces.com/contest/1015/problem/C

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef long long ll;

ll N, M, a, b;

ll total_sum = 0, total_void = 0, to_compress = 0;
priority_queue<ll> freq;

int main () {
    scanf("%lld %lld\n", &N, &M);

    for (ll i = 0; i < N; i++){
        scanf("%lld %lld\n", &a, &b);
        total_sum += a; // don't compress anything at first
        freq.push(a-b);
        total_void += (a-b);
    }
    
    if (total_void < total_sum-M){
        printf("-1\n");
        return 0 ;
    }
    
    while (total_sum > M){
        to_compress++;
        total_sum -= freq.top();
        freq.pop();
    }

    printf("%lld\n", to_compress);
    return 0;
}
/*
Sample input:-
-----------------
4 21
10 8
7 4
3 1
5 4

Sample output:-
-----------------
2

Resources:-
-------------

Explanation:
---------------

*/
