#include <bits/stdc++.h>
/*
Problem: J. Spongebob
Link   : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

unsigned long long N, M;

int main () {
    fastio;
    
    cin >> N >> M;

    cout << ((N%10) + (M%10)) << endl;
    return 0;
}
/*
Sample input:-
-----------------


Sample output:-
-----------------


Resources:-
-------------

Explanation:
---------------

*/
