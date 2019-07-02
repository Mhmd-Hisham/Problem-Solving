#include <bits/stdc++.h>
/*
Problem: P. Char
Link   : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

char ch;

int main () {
    fastio;
    
    cin >> ch;
    
    if (isupper(ch)) ch = tolower(ch);
    else ch = toupper(ch);

    cout << ch << endl;

    return 0;
}
/*
Sample input:-
-----------------
a

Sample output:-
-----------------
A

Resources:-
-------------

Explanation:
---------------

*/
