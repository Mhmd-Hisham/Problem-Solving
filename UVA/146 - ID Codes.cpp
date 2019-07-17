#include <bits/stdc++.h>
/*
Problem: 146 - ID Codes
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=82

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

string code;

int main () {
    fastio;
    
    while ( cin >> code && (code != "#") ){
        
        string first = code;
        
        next_permutation(code.begin(), code.end());
        sort(first.begin(), first.end());
        
        cout << ((code == first)? "No Successor" : code) << '\n';
        
    }

    return 0;
}
/*
Sample input:-
-----------------
abaacb
cbbaa
#

Sample output:-
-----------------
ababac
No Successor

Resources:-
-------------

Explanation:
---------------

*/
