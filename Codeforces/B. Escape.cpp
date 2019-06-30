#include <bits/stdc++.h>
/*
Problem: B. Escape
Link   : https://codeforces.com/contest/148/problem/B

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

double vp, vd, t, f, c;
double pq = 0, T = 0, ans = 0;
/*
pq -> position of the queen(princess)
vp -> queen speed
vd -> dragon speed
*/

int main () {
    fastio;
    
    cin >> vp >> vd >> t >> f >> c;
    
    if (vp < vd){
        pq += t*vp;

        while (pq < c){
            T = pq/(vd-vp); // Time to overtake
            pq += T*vp;
            
            if (pq >= c) break;
            ans++;
            
            T = pq/vd;             // Time to return
            pq += (f+T)*vp;
        }
    }
    
    cout << ans << endl;
    return 0;
}
/*
Sample input:-
-----------------
1
2
1
1
10

Sample output:-
-----------------
2

Resources:-
-------------

Explanation:
---------------

*/
