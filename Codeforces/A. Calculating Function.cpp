#include <bits/stdc++.h>
/*
Problem: A. Calculating Function
Link   : https://codeforces.com/contest/486/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

long long int N;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	
	if (N%2 == 0) cout << N/2 << '\n';
    else cout << (-1-N)/2 << '\n';

	return 0;
}
/*
Sample input:-
-----------------
4

Sample output:-
-----------------
2

Resources:-
-------------
https://www.beatthegmat.com/formula-for-consecutive-even-odd-integers-t17241.html

*/
