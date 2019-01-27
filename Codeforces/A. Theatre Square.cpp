#include <bits/stdc++.h>
/*
Problem: A. Theatre Square
Link   : https://codeforces.com/contest/1/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

double n, m, a;
long long int flagstones;

int main () { 
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m >> a;

    flagstones = ceil(n/a)*ceil(m/a);
    
    cout << flagstones << '\n';
    
    return 0;
}
/*

Sample input:-
-----------------
6 6 4

Sample output:-
-----------------
4

Resources:-
-------------

Explanation:
---------------

*/
