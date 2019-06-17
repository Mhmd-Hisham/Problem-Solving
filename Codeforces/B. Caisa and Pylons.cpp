#include <bits/stdc++.h>
/*
Problem: B. Caisa and Pylons
Link   : https://codeforces.com/contest/463/problem/B

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
int pylons[100001];

ull paid = 0;

int main () {
    fastio;
    
    cin >> N;

    for (int i = 0; i < N; ++i){
        cin >> pylons[i];
    }
    
    int energy = 0, h = 0, hk;
    
    for (int i = 0; i < N; ++i){
        
        hk = pylons[i];
        
        energy += h-hk;
        if (energy < 0){
            paid += -energy;
            energy = 0;
        }

        h = hk;
    }
    
    cout << paid << '\n';

    return 0;
}
/*
Sample input:-
-----------------
5
3 4 3 2 4

Sample output:-
-----------------
4

Resources:-
-------------

Explanation:
---------------

*/
