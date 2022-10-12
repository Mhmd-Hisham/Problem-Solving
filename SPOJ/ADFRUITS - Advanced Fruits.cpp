#include <bits/stdc++.h>
/*
Problem: ADFRUITS - Advanced Fruits
Link   : https://www.spoj.com/problems/ADFRUITS/en/

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

const int MAX_N = 100+1;

int N, M;
string S, T, ans, LCS;

int dp[MAX_N][MAX_N];

int main () {
    fastio;
    
    while (cin >> S >> T){
        
        N = S.size();
        M = T.size();

        // LCS Length
        for (int i = N; i>=0; --i){
            for (int j = M; j>=0; --j){
                dp[i][j] = (i>=N||j>=M)? 0 :
                           (S[i]==T[j])? dp[i+1][j+1]+1 :
                                         max(dp[i+1][j], dp[i][j+1]);
            }
        }

        int i = 0, j = 0;
        LCS = "";
        // Constructing LCS
        while(i<N && j<M){
            if (S[i]==T[j]) LCS = LCS+S[i], i++, j++;
            else if (dp[i][j+1]>dp[i+1][j]) j++;
            else i++;
        }

        ans = "";
        i = 0, j = 0;
        for (char ch : LCS){
            while (T[j]!=ch) ans += T[j++];
            while (S[i]!=ch) ans += S[i++];
            ans += T[j];
            i++, j++;
        }
        while (i<N) ans += S[i++];
        while (j<M) ans += T[j++];
        
        cout << ans << '\n';
    }
    
    return 0;
}
/*
Sample input:-
-----------------
apple peach
ananas banana
pear peach

Sample output:-
-----------------
appleach
bananas
pearch
*/
