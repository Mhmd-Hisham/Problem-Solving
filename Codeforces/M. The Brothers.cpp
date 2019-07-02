#include <bits/stdc++.h>
/*
Problem: M. The Brothers
Link   : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

string trash;
string second_name1, second_name2;

int main () {
    fastio;
    
    cin >> trash >> second_name1;
    cin >> trash >> second_name2;

    cout << ((second_name1 == second_name2)? "ARE Brothers" : "NOT") << endl;
    return 0;
}
/*
Sample input:-
-----------------
bassam ramadan
ahmed ramadan

Sample output:-
-----------------
ARE Brothers

Resources:-
-------------

Explanation:
---------------

*/
