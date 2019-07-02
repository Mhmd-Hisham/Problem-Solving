#include <bits/stdc++.h>
/*
Problem: F. Count
Link   : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F

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
int sum_of_digits = 0;

int main () {
    fastio;
        
    cin >> s;

    
    for (auto ch : s)
        sum_of_digits += ch-'0';
    
    cout << sum_of_digits << endl;
    return 0;
}
/*
Sample input:-
-----------------
1235486

Sample output:-
-----------------
29


Resources:-
-------------

Explanation:
---------------

*/
