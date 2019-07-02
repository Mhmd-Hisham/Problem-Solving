#include <bits/stdc++.h>
/*
Problem: G. First digit !
Link   : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/G

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int x, first_digit;

int main () {
    fastio;
    
    cin >> x;
    
    while (x > 9)
        x/= 10;

    first_digit = x;

    if (first_digit%2 == 0)
        cout << "EVEN" << endl;

    else
        cout << "ODD" << endl;

    return 0;
}
/*
Sample input:-
-----------------
4569

Sample output:-
-----------------
EVEN

Resources:-
-------------

Explanation:
---------------

*/
