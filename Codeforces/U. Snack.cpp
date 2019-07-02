#include <bits/stdc++.h>
/*
Problem: U. Snack
Link   : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int X;
double Y;
double total;

int main () {
    fastio;
    
    cin >> X >> Y;
    
    switch (X){
        case 1: {total = Y*4.00; break;}
        case 2: {total = Y*4.50; break;}
        case 3: {total = Y*5.00; break;}
        case 4: {total = Y*2.00; break;}
        case 5: {total = Y*1.50; break;}    
    }
    
    cout << fixed << setprecision(2) << "Total: R " << total << '\n';
    
    return 0;
}
/*
Sample input:-
-----------------
2 3

Sample output:-
-----------------
Total: R 13.50

Resources:-
-------------

Explanation:
---------------

*/
