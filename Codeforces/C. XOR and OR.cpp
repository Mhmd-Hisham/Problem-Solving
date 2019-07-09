#include <bits/stdc++.h>
/*
Problem: C. XOR and OR
Link   : https://codeforces.com/problemset/problem/282/C

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

string a, b;
bool can = true;

int main () {
    fastio;
    
    cin >> a >> b;

    bool a1 = a.find('1')!=string::npos;       // checks if a contains ones  
    bool b1 = b.find('1')!=string::npos;       // checks if b contains ones

    if (a.size() != b.size()) can = false;
    else if ((a.size() == 1) || ((!a1) && (!b1))) can = (a==b);
    else if (a1 && b1) can = true;
    else can = false;

    cout << (can? "YES" : "NO") << '\n';
    
    return 0;
}
/*
Sample input:-
-----------------
000
101

Sample output:-
-----------------
NO

Resources:-
-------------

Explanation:
---------------
00 -> 00
01 <-> 11
10 <-> 11

100000000 -> 111111111 -> 010101010 -> 101010101 -> 110011001 -> 000000001
000000000 -> 000000000

b1 --> b contains ones
b0 --> b doesn't contain ones :)

    b1   b0
a1  1    0
a0  0   ==?

*/
