#include <bits/stdc++.h>
/*
Problem: B. Binary Number
Link   : https://codeforces.com/problemset/problem/92/B

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

string N;
ll ans = 0;

int main () {
    fastio;
    
    cin >> N;

    reverse(N.begin(), N.end());

    int i = 0;
    while (i < N.size()){
        while(i < N.size() && N[i] == '0')
            ans++, i++;
        
        if (i == N.size()-1) break;

        while(N[i] == '1'){
            ans++, i++;
            if (i == N.size()){
                ans++;
                break;
            }
        }

        if (i < N.size())
            N[i] = '1', ans++;        
    }
        
    cout << ans << '\n';

    return 0;
}
/*
Sample input:-
-----------------
100

Sample output:-
-----------------
2

Resources:-
-------------


Explanation:
---------------

*/
