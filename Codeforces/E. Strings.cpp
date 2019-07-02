#include <bits/stdc++.h>
/*
Problem: E. Strings
Link   : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

string s1, s2;

int main () {
    fastio;
    
    
    cin >> s1 >> s2;
        
    cout << s1.size() << " " << s2.size() << endl;
    cout << (s1 + s2) << endl;

    swap(s1[0], s2[0]);

    cout << s1 << " " << s2 << endl;
    return 0;
}
/*
Sample input:-
-----------------
abcd
ef

Sample output:-
-----------------


Resources:-
-------------

Explanation:
---------------

*/
