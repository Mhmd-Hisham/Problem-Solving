#include <bits/stdc++.h>
/*
Problem: N. Capital or Small
Link   : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

char ch;

int main () {
    fastio;
    
    cin >> ch;

    cout << (isupper(ch)? "IS CAPITAL" : "IS SMALL") << endl;

    return 0;
}
/*
Sample input:-
-----------------
A

Sample output:-
-----------------
IS CAPITAL

Resources:-
-------------

Explanation:
---------------

*/
