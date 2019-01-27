#include <bits/stdc++.h>
/*
Problem: A. Valera and X
Link   : https://codeforces.com/contest/404/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N = 0;
bool form_x = true;
char ch, x, fill_char;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> x >> fill_char;

	for (int i = 0; i < N; i++){
    	for (int j = ((i == 0)? 2 : 0); j < N; j++){
    		cin >> ch;

    		if ( (j == i || j == N-i-1)) {
    		    if (ch != x) form_x = false;
            }

    		else if (ch != fill_char) form_x = false;
    	}
	}
	if (x == fill_char) form_x = false;

	cout << ((form_x)? "YES": "NO") << '\n';
	return 0;
}
/*
Sample input:-
-----------------
5
xooox
oxoxo
soxoo
oxoxo
xooox

Sample output:-
-----------------
NO

Resources:-
-------------

*/
