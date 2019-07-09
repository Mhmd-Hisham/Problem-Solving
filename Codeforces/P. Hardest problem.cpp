#include <bits/stdc++.h>
/*
Problem: P. Hardest problem
Link   : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/P
 
Solution by: Mohamed Hisham El-Banna
 
Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/
 
using namespace std;
 
typedef signed long long ll;
typedef unsigned long long ull;
 
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
string S, X, Y, ans, best;

int main () {
    fastio;

    cin >> S;

    ans = best = S;

    string tmp = "";
    for (int i = 0; i < S.size()-1; ++i){
        tmp += S[i];

        X = tmp;
        Y = S.substr(i+1, S.size());
        sort(X.begin(), X.end());
        sort(Y.begin(), Y.end());

        ans = X+Y;
        if (ans < best)
            best = ans;
    }

    cout << best << endl;

    return 0;
}
/*
Sample input:-
-----------------
acmicpc
 
Sample output:-
-----------------
acccimp
 
Resources:-
-------------
 
Explanation:
---------------
 
*/
