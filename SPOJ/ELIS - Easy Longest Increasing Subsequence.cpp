#include <bits/stdc++.h>
/*
Problem: ELIS - Easy Longest Increasing Subsequence
Link   : https://www.spoj.com/problems/ELIS/en/

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define PI acos(-1)
#define EPS 1e-10

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int N, arr[11];


int main () {
    scanf("%d", &N);
    
    for (int i = 0; i < N; ++i){
        scanf("%d", &arr[i]);
    }
    
    int ans = 0;
    for (int mask = 1; mask <= (1<<N)-1; ++mask){
        int prev = -1, sz = 0;
        for (int i = 0; i < N; ++i){
            if (mask&(1<<i)) {
                if (prev<arr[i]) prev = arr[i], sz++;
                else break;
            }
        }
        ans = max(ans, sz);
    }

    printf("%d\n", ans);

    return 0;
}
/*
Sample input:-
-----------------


Sample output:-
-----------------


*/
