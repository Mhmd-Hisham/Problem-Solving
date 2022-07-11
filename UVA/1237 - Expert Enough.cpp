#include <bits/stdc++.h>
/*
Problem: 1237 - Expert Enough?
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3678

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int T, D, L, H, Q, P;

int found, idx;
string makers[10001], maker;
int Ls[10001], Hs[10001];

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> T;
    
    while ( T-- ){

        cin >> D;
        for (int i = 0; i < D; i++){
            cin >> maker >> L >> H;
            Ls[i] = L;
            Hs[i] = H;
            makers[i] = maker;
        }

        cin >> Q;
        while ( Q-- ){
            cin >> P;
            found = 0;
            for (int i = 0; i < D; i++){
                if ( (Ls[i] <= P) and (P <= Hs[i]) ){
                    idx = i;
                    found++;
                }
            }

            if (found != 1) cout << "UNDETERMINED\n";
            else cout << makers[idx] << '\n';
        }
        
        if (T) cout << '\n';
    }
    
    return 0;
}
/*
Sample input:-
-----------------
1
4
HONDA 10000 45000
PEUGEOT 12000 44000
BMW 30000 75900
CHEVROLET 7000 37000
4
60000
7500
5000
10000

Sample output:-
-----------------
BMW
CHEVROLET
UNDETERMINED
UNDETERMINED


Resources:-
-------------


Explanation:
---------------

*/
