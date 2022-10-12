#include <bits/stdc++.h>
/*
Problem: MC - Minimum Cost
Link   : https://www.spoj.com/problems/MC/en/

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

const int SZ = 1002;

int N, M, LCS;
string S, T;
int dp[SZ][SZ];

int main () {
    fastio;
    
    while (cin >> S && S != "#"){
        cin >> T;
        
        N = S.size(), M = T.size(); LCS = 0;

        for (int i = N; i>=0; --i){
            for (int j = M; j>=0; --j){
                if (j>=M||i>=N) {dp[i][j] = 0; continue; }
                
                dp[i][j] = (S[i]==T[j]? dp[i+1][j+1]+1 : max(dp[i+1][j], dp[i][j+1]));
                LCS = max(LCS, dp[i][j]);
            }
        }

        cout << (N-LCS)*15 + (M-LCS)*30 << '\n';
    }

    return 0;
}
/*
Sample input:-
-----------------


Sample output:-
-----------------


*/
