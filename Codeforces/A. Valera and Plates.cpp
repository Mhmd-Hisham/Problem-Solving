#include <bits/stdc++.h>
/*
Problem: A. Valera and Plates
Link   : https://codeforces.com/problemset/problem/369/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int N, M, K;
int dish_type, ans = 0;

int main () {
    fastio;
    
    cin >> N >> M >> K;

    for (int i = 0; i < N; ++i){
        cin >> dish_type;
        if (dish_type == 1){ 
            if (M) M--;
            else ans++;
        }
        else {
            if (K) K--;
            else if (M) M--;
            else ans++;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}
/*
Sample input:-
-----------------
4 3 1
1 1 1 1

Sample output:-
-----------------
1

Resources:-
-------------

Explanation:
---------------

*/
