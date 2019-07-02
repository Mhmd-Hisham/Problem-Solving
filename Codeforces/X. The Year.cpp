#include <bits/stdc++.h>
/*
Problem: X. The Year
Link   : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int N;

string months[] = {"January", "February", "March",
                 "April", "May", "June", "July",
                 "August", "September", "October",
                 "November", "December"};

int main () {
    fastio;
    
    cin >> N;

    cout << months[N-1] << endl;

    return 0;
}
/*
Sample input:-
-----------------


Sample output:-
-----------------


Resources:-
-------------

Explanation:
---------------

*/
