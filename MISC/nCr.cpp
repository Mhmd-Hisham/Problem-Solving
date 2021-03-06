#include <bits/stdc++.h>
/*
Problem: n choose r

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int MAX_N = 66, N = 67;


ll mem[N][N];
ll ncr(int n, int r){
    // O (n*r)
    if (!r||n==0||n==r) return 1;
    if (r>n) return 0;
    
    mem[n][r] = (mem[n][r]!=-1)? mem[n][r] : ncr(n-1, r-1) + ncr(n-1, r);
    return mem[n][r];
}

ll ncr2(int n, int r) {
    // O(n-r)
    // use it when n*r won't fit in a 2d matrix

    /*
    It's the same idea as the following code, but faster.
        if (n == r) return 1;
        if (n < r) return 0;
        return ncr2(n - 1, r) * n / (n - r);
    */
    
    // nCr(n, r) = nCr(n, n-r)
    r = (r<n-r)? n-r : r;
    
    ll ret = 1;
    ll d, q, rem;
    for (int i = r + 1; i <= n; ++i) {
        d = (i - r);
        q = ret / d;
        rem = ret - (q * d);
        ret = (q * i) + (rem * i) / d;
    }
    return ret;
}


int main () {
    fastio;
    
    memset(mem, -1, sizeof (mem));
    
    cout << ncr(MAX_N, MAX_N/2) << "\n";
    cout << ncr2(MAX_N, MAX_N/2) << "\n";

    return 0;
}
/*
Sample input:-
-----------------


Sample output:-
-----------------


*/
