#include <bits/stdc++.h>
/*
Problem: A. Colorful Stones (Simplified Edition)
Link   : https://codeforces.com/contest/265/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int pos = 0;// we start at the first stone
string stones, instructions;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> stones >> instructions;
	
	for (int i = 0; i < instructions.length(); i++){
	    if (instructions[i] == stones[pos]) pos++;
	}

	printf("%d\n", pos+1);// remember we don't output the index
	return 0;
}
/*
input:-
-----------
BRRBGBRGRBGRGRRGGBGBGBRGBRGRGGGRBRRRBRBBBGRRRGGBBB
BBRBGGRGRGBBBRBGRBRBBBBRBRRRBGBBGBBRRBBGGRBRRBRGRB

output:-
-----------
15

Resources:-
-------------
Lesson learned from solving this problem: string.length() == string.size() 😅
look here: https://stackoverflow.com/questions/905479/stdstring-length-and-size-member-functions
*/
