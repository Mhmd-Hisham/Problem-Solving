#include <bits/stdc++.h>
/*
Problem: D. Difference
Link   : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

long long A, B, C, D;
long long difference;

int main () {
    fastio;
    
    
    cin >> A >> B >> C >> D;
    difference = (A*B) - (C*D);

    cout << "Difference = " << difference << endl;
    return 0;
}
/*
Sample input:-
-----------------
1 2 3 4

Sample output:-
-----------------
Difference = -10

Resources:-
-------------

Explanation:
---------------

*/
