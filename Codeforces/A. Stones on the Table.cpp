#include <bits/stdc++.h>
/*
Problem: A. Stones on the Table
Link   : https://codeforces.com/contest/266/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N = 0, removes = 0;
string stones;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> stones;

	for (int i = 1; i < N; i++){
	    if (stones[i-1] == stones[i]) removes++;
	}

	cout << removes << '\n';
	return 0;
}
/*
input:-
-----------
5
RRRRR

output:-
-----------
0
*/
