#include <bits/stdc++.h>
/*
Problem: A. I Wanna Be the Guy
Link   : https://codeforces.com/contest/469/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int levels = 0, p = 0, level;
bool passed[102];

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

    memset(passed, 0, sizeof(passed));

	cin >> levels;
    cin >> p;
    for (int i = 0; i < p; i++){
        cin >> level;
        passed[level] = 1;
    }

    cin >> p;
    for (int i = 0; i < p; i++){
        cin >> level;
        passed[level] = 1;
    }

    level = levels;
    while (passed[level]){
        level--;
    }

	cout << ((level == 0)? "I become the guy." : "Oh, my keyboard!" ) << '\n';
	return 0;
}
/*
input:-
-----------
4
3 1 2 3
2 2 4

output:-
-----------
I become the guy.

Resources:-
-------------

*/
