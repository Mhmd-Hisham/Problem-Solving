#include <bits/stdc++.h>
/*
Problem: A. Black Square
Link   : https://codeforces.com/contest/431/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

string game;
int a1, a2, a3, a4;
int wasted_calories = 0;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> a1 >> a2 >> a3 >> a4;
    cin >> game;

	for (int i = 0; i < game.size(); i++){
	    if (game[i] == '1') wasted_calories+= a1;
	    else if (game[i] == '2') wasted_calories+= a2;
	    else if (game[i] == '3') wasted_calories+= a3;
	    else wasted_calories+= a4;
	}

	cout << wasted_calories << '\n';
	return 0;
}
/*
input:-
-----------
1 2 3 4
123214

output:-
-----------
13

Resources:-
-------------

*/
