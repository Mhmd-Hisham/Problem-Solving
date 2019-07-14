#include <bits/stdc++.h>
/*
Problem: 10264 - The Most Potent Corner
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1205

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
int corners[1<<15];
int potencies[1<<15];

bool areNeighbors(int i, int j);

int main () {
    fastio;
        
    while ( cin >> N && !cin.eof() ){
        
        int ans = INT_MIN;
        // an N-dimensional cube has pow(N, 2) corners
        for (int i = 0; i < (1<<N); ++i)
            cin >> corners[i];

        // calculating the potency of each corner
        for (int i = 0; i < (1<<N); ++i){
            potencies[i] = 0;

            for (int j = 0; j < (1<<N); ++j){
                if (!areNeighbors(i,j)) continue;
                potencies[i] += corners[j];
            }
        }
        
        // complete search
        for (int i = 0; i < (1<<N); ++i){
            for (int j = 0; j < (1<<N); ++j){
                if (!areNeighbors(i,j)) continue;
                    ans = max(ans, potencies[i]+potencies[j]);
            }
        }
        
        cout << ans << '\n';
    }

    return 0;
}

bool areNeighbors(int i, int j) {
    return (__builtin_popcount(i^j)==1) && (i!=j);
}

/*
Sample input:-
-----------------
3
82
73
8
49
120
44
242
58
2
1
1
1
1

Sample output:-
-----------------
619
4

Resources:-
-------------

Explanation:
---------------

*/

