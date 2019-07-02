#include <bits/stdc++.h>
/*
Problem: F. Multiples
Link   : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int A, B;

int main () {
    fastio;
    
    
    cin >> A >> B;

    if (max(A, B)%min(A,B) == 0)
        cout << "Multiples" << endl;
    
    else
        cout << "No Multiples" << endl;
    
    return 0;
}
/*
Sample input:-
-----------------
6 24

Sample output:-
-----------------
Multiples


Resources:-
-------------

Explanation:
---------------

*/
