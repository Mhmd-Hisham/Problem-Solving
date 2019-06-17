#include <bits/stdc++.h>
/*
Problem: B. Find The Bone
Link   : https://codeforces.com/contest/796/problem/B

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

int N, M, K;

int tmp, ui, vi;
int freq[1000002];

int main () {
    fastio;
    
    cin >> N >> M >> K;
    
    for (int i = 0; i < M; i++){
        cin >> tmp;
        freq[tmp]++;
    }
    
    int pos = 1;
    if (freq[pos] == 0){
        for (int i = 0; i < K; ++i){
            cin >> ui >> vi;
            if ((ui != pos) && (vi != pos)) continue;

            if (ui == pos) pos = vi;
            else if (vi == pos) pos = ui;

            if (freq[pos]) break;
        }
    }
    
    cout << pos << endl;    
    

    return 0;
}
/*
Sample input:-
-----------------
7 3 4
3 4 6
1 2
2 5
5 7
7 1

Sample output:-
-----------------
1

Resources:-
-------------

Explanation:
---------------

*/
