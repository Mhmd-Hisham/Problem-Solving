#include <bits/stdc++.h>
/*
Problem: C. Let's use Getline
Link   : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

string s;

int main () {
    fastio;
    
    getline(cin, s, '\\');

    cout << s << endl;

    return 0;
}
/*
Sample input:-
-----------------
google \or facebook

Sample output:-
-----------------
google 

Resources:-
-------------

Explanation:
---------------

*/
