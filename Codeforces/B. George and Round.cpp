#include <bits/stdc++.h>
/*
Problem: B. George and Round
Link   : https://codeforces.com/problemset/problem/387/B

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N, M;
int prepared[3001], required[3001], needed = 0;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M;

    for (int i = 0; i < N; i++) cin >> required[i];
    
    for (int i = 0; i < M; i++) cin >> prepared[i];

    sort(required, required+N);
    sort(prepared, prepared+M);

    int k = 0;
    for (int i = 0; i < N; i++){
        while (k < M && prepared[k] < required[i]){
            k++;
        }
        if (k == M) needed++;
        else k++;
    }
    
    cout << needed << '\n';
    return 0;
}
/*
Sample input:-
-----------------
3 5
1 2 3
1 2 2 3 3

Sample output:-
-----------------
0

Resources:-
-------------

Explanation:
---------------

*/
