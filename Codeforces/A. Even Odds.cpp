#include <bits/stdc++.h>
/*
Problem: A. Even Odds
Link   : https://codeforces.com/contest/318/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

long long int N, k, last_odd_pos;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> k;
	
	last_odd_pos = ((N+1)/2);
	if (k > last_odd_pos) cout << 2*(k-last_odd_pos);
	else cout << 2*k-1;

	return 0;
}
/*
input:-
-----------
10 3

output:-
-----------
5

Resources:-
-------------

*/
