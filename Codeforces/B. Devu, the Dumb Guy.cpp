#include <bits/stdc++.h>
/*
Problem: B. Devu, the Dumb Guy
Link   : https://codeforces.com/contest/439/problem/B

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

ull N, X;
ull subjects[100001];

ull ans = 0;

int main () {
    fastio;
    
    cin >> N >> X;

    for (ull i = 0; i < N; ++i)
        cin >> subjects[i];
    
    sort(subjects, subjects+N);
    
    for (ull subject : subjects){
        
        ans += subject * X;
        X = (X==1)? X : X-1;
    }

    cout << ans << '\n';

    return 0;
}
/*
Sample input:-
-----------------
2 3
4 1

Sample output:-
-----------------
11

Resources:-
-------------

Explanation:
---------------

*/
