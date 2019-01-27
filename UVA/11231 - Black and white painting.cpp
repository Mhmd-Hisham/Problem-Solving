#include <bits/stdc++.h>
/*
Problem: 11231 - Black and white painting
Link   : https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2172

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N, M, C, rem;
int main () {

	while ( scanf("%d %d %d\n", &N, &M, &C) && N ){
        rem = (C == 0)? 0 : 1;
        printf("%d\n", ((N-7)*(M-7)+rem)/2);

	}
	
	return 0;
}

/*
Sample input:-
----------------
8 8 0
8 8 1
9 9 1
40000 39999 0
0 0 0

Sample output:-
----------------
0
1
2
799700028

Resources:-
-------------
Video Solution [Eng Amr Saud] (Arabic): https://www.youtube.com/watch?v=UNUD8qp33ic&feature=youtu.be
*/
