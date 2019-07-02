#include <bits/stdc++.h>
/*
Problem: K. Increment Decrement
Link   : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int X = 0, max_value = 0;
string commands;

int main () {
    fastio;
    
    cin >> commands;

    for (char ch : commands){
        X += (ch == 'I')? 1 : -1;
        max_value = max(max_value, X);
    }

    cout << max_value << endl;

    return 0;
}
/*
Sample input:-
-----------------
IIDID

Sample output:-
-----------------
2

Resources:-
-------------

Explanation:
---------------

*/
