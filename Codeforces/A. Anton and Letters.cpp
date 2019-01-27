#include <bits/stdc++.h>
/*
Problem: A. Anton and Letters
Link   : https://codeforces.com/contest/443/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

char letter;
unordered_set< char > letters_set;

int main () {

	while ( scanf("%c", &letter) && letter != '}' ){
		if (isalpha(letter)) letters_set.insert(letter);
	}

	printf("%d\n", int(letters_set.size()));
	return 0;
}
/*
input:-
-----------
{b, a, b, a}

output:-
-----------
2

Resources:-
-------------
STL SET data structure: https://www.geeksforgeeks.org/set-in-cpp-stl/
*/
