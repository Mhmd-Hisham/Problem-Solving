#include <bits/stdc++.h>
/*
Problem: B. Petr and a Combination Lock
Link   : https://codeforces.com/contest/1097/problem/B

solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N = 0, rotations[16] = {0}, sum = 0;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> rotations[i];
    }
    
    int n_bits = 1<<N;
    
    for (int mask = 0; mask <= n_bits; mask++){
        
        for (int i = 0; i < N; i++){
            if (mask & (1<<i)) sum -= rotations[i];
            else sum += rotations[i];
        }
        if (sum%360 == 0){
            cout << "YES\n";
            return 0;
        }
        sum = 0;
    }
    cout <<"NO\n";

    return 0;
}
/*
Sample input:-
-----------------
3
10
20
30

Sample output:-
-----------------
YES

Resources:-
-------------

Explanation:
---------------

*/
