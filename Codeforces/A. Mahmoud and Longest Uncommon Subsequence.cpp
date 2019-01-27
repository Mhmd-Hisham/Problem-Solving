#include <bits/stdc++.h>
/*
Problem: A. Mahmoud and Longest Uncommon Subsequence
Link   : https://codeforces.com/contest/766/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

string s1, s2;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> s1 >> s2;

    if (s1 == s2) cout << "-1";
    else cout << max(s1.length(), s2.length());

	return 0;
}
/*
input:-
-----------
abcd
defgh

output:-
-----------
5

Resources:-
-------------

*/
