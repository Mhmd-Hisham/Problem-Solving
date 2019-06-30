#include <bits/stdc++.h>
/*
Problem: C. Hamburgers
Link   : https://codeforces.com/problemset/problem/371/C

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

#define FOR(i,to) for(i=0;i<(to);++i)
#define FORR(i,arr) for(auto& i:arr)
#define ITER(it,cont) for(__typeof(cont.begin()) it=cont.begin();it!=cont.end();it++)
#define ALL(v) (v.begin()),(v.end())
#define ZERO(arr) memset(arr,0,sizeof(arr))
#define MINUS(arr) memset(arr,0xff,sizeof(arr))
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

string recipe;
int Bs = 0, Ss = 0, Cs = 0; 

int Nb, Ns, Nc;
int Pb, Ps, Pc;
ll r;

ull ans = 0;
bool valid(ull n);

int main () {
    fastio;
    
    cin >> recipe;
    for (char c : recipe){
        if      (c == 'B') Bs++;
        else if (c == 'S') Ss++;
        else if (c == 'C') Cs++;
    }
    
    cin >> Nb >> Ns >> Nc;
    cin >> Pb >> Ps >> Pc;
    cin >> r;
    
    ull s = 0, e = ULLONG_MAX, mid;
    
    while (s < e){
        mid = (s+e)>>1;
        
        if (valid(mid)) ans = max(ans, mid), s = mid+1;
        else e = mid;
    }
    
    cout << ans << '\n';;
    return 0;
}

bool valid(ull n){
    ull missing_b = (Bs*n > Nb)? Bs*n-Nb : 0;
    ull missing_s = (Ss*n > Ns)? Ss*n-Ns : 0;
    ull missing_c = (Cs*n > Nc)? Cs*n-Nc : 0;
    
    return ( (missing_b * Pb) +
             (missing_s * Ps) +
             (missing_c * Pc) ) <= r;
}
/*
Sample input:-
-----------------
BSC
1 1 1
1 1 3
1000000000000

Sample output:-
-----------------
200000000001

Resources:-
-------------

Explanation:
---------------

*/
