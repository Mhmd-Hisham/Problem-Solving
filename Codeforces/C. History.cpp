#include <bits/stdc++.h>
/*
Problem: C. History
Link   : https://codeforces.com/problemset/problem/137/C

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/
    
using namespace std;
    
typedef signed long long ll;
typedef unsigned long long ull;
    
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    
int N;

ll ans = 0, a, b;
pair<ll, ll> arr[100001];
bool isWithin(pair<ll, ll> a, pair<ll, ll> b);

int main (){
    fastio;
    
    cin >> N;

    for (int i = 0; i < N; ++i){
        cin >> a >> b;
        arr[i] = make_pair(a, b);
    }
 
    sort(arr, arr+N);
    
    int p1 = 0, p2 = 1;
    
    while ((p1 <= p2) && (p2 < N)){
        if ( isWithin(arr[p1], arr[p2]) ){
            ans++;
            p2++;
            continue;
        }
        
        p1 = p2;
        p2++;
    }
    
    cout << ans << '\n';
    
    return 0;
}

bool isWithin(pair<ll, ll> a, pair<ll, ll> b){
    return ((a.first  < b.first) && (a.second > b.second));
}

/*
Sample input:-
-----------------
5
1 10
2 9
3 8
4 7
5 6

Sample output:-
-----------------
4

Resources:-
-------------


Explanation:
---------------

*/
