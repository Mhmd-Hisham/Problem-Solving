#include <bits/stdc++.h>
/*
Problem: S. Coordinates of a Point
Link   : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/S

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

double x, y;

int main () {
    fastio;
    
    cin >> x >> y;

    if ((x == 0) && (y == 0))
        cout << "Origem\n";
    
    else if (x == 0) cout << "Eixo Y\n";
    else if (y == 0) cout << "Eixo X\n";
    
    else if ((x > 0) && (y > 0)) cout << "Q1\n";
    else if ((x < 0) && (y > 0)) cout << "Q2\n";
    else if ((x < 0) && (y < 0)) cout << "Q3\n";
    else if ((x > 0) && (y < 0)) cout << "Q4\n";

    return 0;
}
/*
Sample input:-
-----------------
4.5 -2.2

Sample output:-
-----------------
Q4

Resources:-
-------------

Explanation:
---------------

*/
