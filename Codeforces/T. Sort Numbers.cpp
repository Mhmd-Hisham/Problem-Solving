#include <bits/stdc++.h>
/*
Problem: T. Sort Numbers
Link   : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int A, B, C;
int s1, s2, s3;

int main () {
    fastio;
    
    cin >> A >> B >> C;
    
    s1 = min(min(A, B), C);
    
    s3 = max(max(A, B), C);
    
    s2 = A ^ B ^ C ^ s1 ^ s3;
    
    
    cout << s1 << '\n';
    cout << s2 << '\n';
    cout << s3 << '\n';
    
    cout << '\n';
    
    cout << A << '\n';
    cout << B << '\n';
    cout << C << '\n';

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
