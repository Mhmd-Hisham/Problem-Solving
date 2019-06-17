#include <bits/stdc++.h>
/*
Problem: B. Petya and Countryside
Link   : https://codeforces.com/contest/66/problem/B

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

int N;
int heights[1001];

int ans = 1;

int main () {
    fastio;
    
    cin >> N;
    
    for (int i = 0; i < N; i++)
        cin >> heights[i];

    for (int i = 0; i < N; ++i){
        
        int l = 0, r = 0;
        int h = heights[i];
                
        for (int j = i+1; j < N; ++j){
            if (heights[j] > h) break;
            else h = min(h, heights[j]);
            r++;
        }
        
        h = heights[i];
        for (int j = i-1; j >= 0; --j){
            if (heights[j] > h) break;
            else h = min(h, heights[j]);
            l++;
        }
        ans = max(ans, r+l+1);
    }
    
    cout << ans << '\n';

    return 0;
}
/*
Sample input:-
-----------------
8
1 2 1 1 1 3 3 4

Sample output:-
-----------------
6

Resources:-
-------------

Explanation:
---------------

*/
