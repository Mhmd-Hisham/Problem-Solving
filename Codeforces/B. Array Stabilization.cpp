#include <bits/stdc++.h>
/*
Problem: B. Array Stabilization
Link   : https://codeforces.com/contest/1095/problem/B

solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/


using namespace std;

int N;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    int arr[N];

    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }

    sort(arr, arr+N);

    cout << min(arr[N-2]-arr[0], arr[N-1]-arr[1]) << '\n';

    return 0;
}
/*
Sample input:-
-----------------
4
1 3 3 7

Sample output:-
-----------------
2

Resources:-
-------------

Explanation:
---------------

*/
