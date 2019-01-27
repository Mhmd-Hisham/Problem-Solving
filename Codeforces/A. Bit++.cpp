#include <bits/stdc++.h>
/*
Problem: A. Bit++
Link   : https://codeforces.com/contest/282/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int X = 0;
int operations = 0;
char op, null;

int main () {
	scanf("%d\n", &operations);

	for (int i = 0; i <  operations; i++ ){
	    scanf("%c%c%c\n", &null, &op, &null);
	    if (op == '+') X++;
	    else X--;
	}
	
	printf("%d\n", X);
	return 0;
}
/*
input:-
-----------
2
X++
--X

output:-
-----------
0

Resources:-
-------------

*/
