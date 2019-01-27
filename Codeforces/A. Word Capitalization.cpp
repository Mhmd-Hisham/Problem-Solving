#include <bits/stdc++.h>
/*
Problem: A. Word Capitalization
Link   : https://codeforces.com/contest/281/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

string word = "";


int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> word;
    word[0] = toupper(word[0]);
	cout << word << '\n';
	return 0;
}
/*
input:-
-----------
ApPLe

output:-
-----------
ApPLe

Resources:-
-------------
toupper: http://www.cplusplus.com/reference/cctype/toupper/

*/
