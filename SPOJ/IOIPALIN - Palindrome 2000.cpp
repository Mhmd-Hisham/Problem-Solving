#include <bits/stdc++.h>
/*
Problem: IOIPALIN - Palindrome 2000
Link   : https://www.spoj.com/problems/IOIPALIN/en/

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

const int SZ = 5004;

int N, LCS;
string S, T;
int dp[SZ][SZ];

int main () {
    fastio;

    cin >> N >> S;

    LCS = 0;
    T = string(S);
    reverse(T.begin(), T.end());
    for (int i = N; i >= 0; --i){
        for (int j = N; j >=0; --j){
            dp[i][j] = ((i==N)||(j==N))? 0 : 
                       (S[i]==T[j])?     dp[i+1][j+1]+1 : 
                                         max(dp[i+1][j], dp[i][j+1]);

            LCS = max(dp[i][j], LCS);
        }
    }
    
//    cout << LCS << '\n';
    cout << N-LCS << '\n';
    
    return 0;
}
/*
Sample input:-
-----------------


Sample output:-
-----------------


*/
