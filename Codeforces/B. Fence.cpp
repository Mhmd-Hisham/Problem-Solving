#include <bits/stdc++.h>
/*
Problem: B. Fence
Link   : https://codeforces.com/contest/363/problem/B

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int K, N;
int heights[150001];

int main () {
    fastio;

    cin >> N >> K;

    for (int i = 0; i < N; i++)
        cin >> heights[i];
    
    int segment_sum = 0;
    int p1 = 0, p2 = K-1;
    
    for (int i = p1; i <= p2; ++i) segment_sum += heights[i];

    int idx = 0;
    int min_sum = segment_sum;

    
    while (p2 < N){
        
        if (min_sum > segment_sum){
            idx = p1;
            min_sum = segment_sum;
        }
        
        segment_sum -= heights[p1++];
        segment_sum += heights[++p2];
    }
    
     cout << idx+1 << '\n';

    return 0;
}
/*
Sample input:-
-----------------
7 3
1 2 6 1 1 7 1

Sample output:-
-----------------
3

Resources:-
-------------

Explanation:
---------------

*/
