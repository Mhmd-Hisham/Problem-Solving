#include <bits/stdc++.h>
/*
Problem: 10110 - Light, more light
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1051

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

unsigned int N, sq;

int main () {

	while ( scanf("%d\n", &N) && N ){

	    sq = int(sqrt(N));

		printf( (sq*sq == N)? "yes\n" : "no\n" );

	}

	return 0;
}

/*
input:-
-----------
3
6241
8191
0

output:-
-----------
no
yes
no

Resources:-
-------------
Video (Arabic): https://www.youtube.com/watch?v=6unjJwXC5gI&feature=youtu.be
*/
