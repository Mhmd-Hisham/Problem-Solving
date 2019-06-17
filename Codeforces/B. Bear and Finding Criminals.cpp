#include <bits/stdc++.h>
/*
Problem: B. Bear and Finding Criminals
Link   : https://codeforces.com/contest/680/problem/B

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int N, S;           // no. cities, the index of the city which the officer lives in
int ans = 0;
int city[101];

int main () {
    fastio;
    
    cin >> N >> S;

    for (int i = 0; i < N; i++)
        cin >> city[i];

    int i = S-1, j = S-1;
    
    bool a = (i >= 0);
    bool b = (j < N);
    
    while (a or b){
        
        if (a && b && city[i] && city[j]) ans += 2;
        else if (a && (!b) && city[i]) ans++;
        else if (b && (!a) && city[j]) ans++; 
        
        j++;
        i--;

        a = (i >= 0);
        b = (j < N);
    
    }
    ans = city[S-1]? ans-1 : ans;
    
    cout << ans << '\n';

    return 0;
}
/*
Sample input:-
-----------------
6 3
1 1 1 0 1 0

Sample output:-
-----------------
3

Resources:-
-------------

Explanation:
---------------

*/
