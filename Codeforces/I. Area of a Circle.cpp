#include <bits/stdc++.h>
/*
Problem: I. Area of a Circle
Link   : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/I

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

double R;
double PI = 3.14159, area;

int main () {
    fastio;
    
    
    cin >> R;

    area = PI*R*R;

    cout << fixed << setprecision(9) << "Area = " << area << endl;
    return 0;
}
/*
Sample input:-
-----------------
10.64

Sample output:-
-----------------
Area = 355.658147264

Resources:-
-------------

Explanation:
---------------

*/
