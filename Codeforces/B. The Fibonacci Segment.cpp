#include <bits/stdc++.h>
/*
Problem: B. The Fibonacci Segment
Link   : https://codeforces.com/problemset/problem/365/B

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int N, ans = 0;

ll arr[100001];

int main () {
    fastio;
    
    cin >> N;
    for (int i = 0; i < N; ++i){
        cin >> arr[i];
    }
    
    if (N < 3)
        ans = N;
    
    else {    
        int p1 = 0, p2 = 2;
        
        while (p1 <= p2 && p2 < N){
            if (arr[p2-1]+arr[p2-2] == arr[p2]){
                p2++;
                ans = max(ans, p2-p1);
                continue;
            }
            
            ans = max(ans, p2-p1);
            p1 = p2-1;
            p2 += 1;
        }
    }

    cout << ans << '\n';

    return 0;
}
/*
Sample input:-
-----------------


Sample output:-
-----------------


Resources:-
-------------

Explanation:
---------------

*/
