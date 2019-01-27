#include <bits/stdc++.h>
/*
Problem: A. Translation
Link   : https://codeforces.com/contest/41/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

string word1, word2;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> word1 >> word2;

    reverse(word2.rbegin(), word2.rend());

	cout << ( (word1 == word2)? "YES" : "NO") << '\n';
	return 0;
}
/*
input:-
-----------
code
edoc

output:-
-----------
YES

Resources:-
-------------
http://www.cplusplus.com/reference/algorithm/reverse/
https://stackoverflow.com/questions/4951796/how-to-reverse-an-stdstring
https://www.geeksforgeeks.org/reverse-a-string-in-c-cpp-different-methods/

*/
