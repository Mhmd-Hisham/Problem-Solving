#include <bits/stdc++.h>

using namespace std;

int N, i, v = 27;
bool s = true;
string S = "";

struct shit {
	int x = 0;
	x += v;
	operator=(const shit&){
		if (*this.x == 0 || *this.x > 26){
			x += *this.x; 
		}
	}
}

int main () {

	while ( cin >> S && !cin.eof() ) {
		cin >> N;
		
		for (i = 0; i < N; i++) {
			cin >> v;
			if ( s ) {
				if ( v != 0 && v < 27 ) {
					printf("%c", S[v-1]);
				}
				else { s = false;}
			}
		}
		printf("\n");
	}

	return 0;
}
/*
input:-
-----------
1 2 3 4 5 6 7  8 9 10

. . . \
1 2 3 0 5 6 7 88 0 10


1. start
2. store input
3. loop into input
4. check & print until wrong
5. stop


1. start
2. loop into input
3. check & print until wrong
4. stop checking..





output:-
-----------


Problem: 
*/
