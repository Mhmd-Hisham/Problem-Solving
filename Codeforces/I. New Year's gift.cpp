#include <bits/stdc++.h>
/*
Problem: I. New Year's gift
Link   : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

string s1, s2, s3;

int main () {
    fastio;
    
    
    getline(cin, s1, ',');
    getline(cin, s2, ',');
    
    cin >> s3;

    cout << s1 << " " << s2 << " " << s3 << endl;

    return 0;
}
/*
Sample input:-
-----------------
happy,newyear,enjoy

Sample output:-
-----------------
happy newyear enjoy

Resources:-
-------------

Explanation:
---------------

*/
