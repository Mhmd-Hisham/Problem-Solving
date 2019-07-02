#include <bits/stdc++.h>
/*
Problem: R. Interval
Link   : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

typedef signed long long ll;
typedef unsigned long long ull;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

double n;

int main () {
    fastio;
        
    cin >> n;
    
    if ((n < 0) || ( n > 100))
        cout << "Fora de intervalo\n";
    
    else if (n <= 25) cout << "Intervalo [0,25]\n";
    else if (n <= 50) cout << "Intervalo (25,50]\n";
    else if (n <= 75) cout << "Intervalo (50,75]\n";
    else              cout << "Intervalo (75,100]\n";

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
