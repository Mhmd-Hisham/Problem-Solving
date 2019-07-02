#include <bits/stdc++.h>
/*
Problem: L. Max and Min
Link   : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int a, b, c, d;
int minimum, maximum;

int main () {
    fastio;
        
    cin >> a >> b >> c >> d;
    
    minimum = min(a, b);
    minimum = min(minimum, c);
    minimum = min(minimum, d);

    maximum = max(a, b);
    maximum = max(maximum, c);
    maximum = max(maximum, d);

    cout << minimum << " " << maximum << endl;

    return 0;
}
/*
Sample input:-
-----------------
20 10 -5 15

Sample output:-
-----------------
-5 20

Resources:-
-------------
http://www.cplusplus.com/reference/algorithm/min/
https://www.geeksforgeeks.org/stdmin-in-cpp/

http://www.cplusplus.com/reference/algorithm/max/
https://www.geeksforgeeks.org/stdmax-in-cpp/

Explanation:
---------------

*/
