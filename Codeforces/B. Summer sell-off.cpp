#include <bits/stdc++.h>
/*
Problem: B. Summer sell-off
Link   : https://codeforces.com/contest/810/problem/B

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

int N, F;
int ki, li, i;

ll ans = 0;
pair<ll, ll> arr[100001];

bool comp(const pair<ll, ll> &a, const pair<ll, ll> &b);

int main () {
    fastio;
    
    cin >> N >> F;

    for (int i = 0; i < N; i++){
        cin >> ki >> li;
        arr[i] = make_pair(ki, li);
    }
    
    sort(arr, arr+N, comp);

    ll sold, products, clients;
    for (int i = 0; i < N; i++){
        products = arr[i].first;
        clients  = arr[i].second;
        
        sold = min(products, clients);
        
        if (i < F)
            sold = min(products*2, clients);
        
        ans += sold;
    }
    
    cout << ans << '\n';

    return 0;
}

bool comp(const pair<ll, ll> &a, const pair<ll, ll> &b){
    int ax = min(a.first, a.second);
    int bx = min(b.first, b.second);

    int ay = min(a.first*2, a.second);
    int by = min(b.first*2, b.second);
    
    return ay-ax > by-bx;
    
    
}

/*
Sample input:-
-----------------
4 1
2 1
3 3
2 2
1 3

Sample output:-
-----------------
8

Resources:-
-------------

Explanation:
---------------

*/
