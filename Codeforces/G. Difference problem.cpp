#include <bits/stdc++.h>
/*
Problem: G. Difference problem
Link   : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int ones, zeros;
string s;

int main () {
    fastio;
    
    cin >> s;
    
    ones = 0;
    for (auto ch : s)
        ones += (ch=='1');
    
    zeros = s.size() - ones;
    
    cout << abs(zeros - ones) << endl;
    
    return 0;
}
/*
Sample input:-
-----------------
11100000

Sample output:-
-----------------
2

Resources:-
-------------

Explanation:
---------------

*/
