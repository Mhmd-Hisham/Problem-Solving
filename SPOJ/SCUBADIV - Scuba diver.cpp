#include <bits/stdc++.h>
/*
Problem: SCUBADIV - Scuba diver
Link   : https://www.spoj.com/problems/SCUBADIV/en/

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

const int MAXN = 1001;
const int MAX_OX = 22, MAX_NI = 80, MAX_W = 801;

int T, N;

int ans;
int OX_NEEDED, NI_NEEDED;
int W[MAXN], Ox[MAXN], Ni[MAXN];

int  dp[MAXN][MAX_OX][MAX_NI];
int vis[MAXN][MAX_OX][MAX_NI], vid;

int TOTAL;

bool isFull(int a, int b){
    return (a==0&&b==0);
}

int BC(int i, int ox, int ni){
    if (isFull(ox, ni)) return 0;
    if (i==N) return TOTAL+1;
    if (vis[i][ox][ni]==vid) return dp[i][ox][ni];
    
    
    vis[i][ox][ni] = vid;
    int take = TOTAL, leave = 0;
    take = BC(i+1, max(0, ox-Ox[i]), max(0, ni-Ni[i]))+W[i];
    leave = BC(i+1, ox, ni);

    dp[i][ox][ni] = min(leave, take);
    return dp[i][ox][ni];
}

int main () {
    fastio;
    
    cin >> T;
    
    while ( T-- ){
        vid++; ans = INT_MAX;
        TOTAL = 0;
        
        cin >> OX_NEEDED >> NI_NEEDED;
        cin >> N;
        for (int i = 0; i < N; ++i){
            cin >> Ox[i] >> Ni[i] >> W[i];
            TOTAL += W[i];
        }
        
        cout << BC(0, OX_NEEDED, NI_NEEDED) << '\n';
        
    }
    
    return 0;
}
/*
Sample input:-
-----------------


Sample output:-
-----------------


*/
