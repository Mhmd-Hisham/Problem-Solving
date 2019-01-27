#include <bits/stdc++.h>

using namespace std;

int N = 0, n;
string s;

int main () {
	cin >> N;
	bool block[N+1][N+1];
	
	for (int i = 0;i < N+1; i++){
		for (int j = 0; j < N+1; j++){
			cin >> block[i][j];
		}
	}

	for (int i = 0;i < N; i++){
		for (int j = 0; j < N; j++){
			n = 0;
			if (block[i][j]) n++;
			if (block[i][j+1]) n++;
			if (block[i+1][j]) n++;
			if (block[i+1][j+1]) n++;
			s += (n>1)? "S" : "U";
		}
		s += "\n";
	}
	
	cout << s;
	
	return 0;
}


/*
\-----------------------------\
\ 1 1 x x \ x 1 0 x \ x x 0 1 \
\ 1 0 x x \ x 0 1 x \ x x 1 0 \    SSS
\ x x x x \ x x x x \ x x x x \
\ x x x x \ x x x x \ x x x x \
\-----------------------------\
\ x x x x \ x x x x \ x x x x \
\ 1 0 x x \ x 0 1 x \ x x 1 0 \    SUS
\ 1 0 x x \ x 0 0 x \ x x 0 1 \
\ x x x x \ x x x x \ x x x x \
\-----------------------------\
\ x x x x \ x x x x \ x x x x \
\ x x x x \ x x x x \ x x x x \    SSS
\ 1 0 x x \ x 0 0 x \ x x 0 1 \
\ 0 1 x x \ x 1 1 x \ x x 1 0 \
\-----------------------------\

input:-
-----------
3
1 1 0 1
1 0 1 0
1 0 0 1
0 1 1 0

4
0 1 0 1 0
1 0 0 0 1
0 1 0 1 0
1 0 1 0 1
0 0 0 0 0

SUUS
SUUS
SSSS
UUUU





output:-
-----------


Problem: 
*/
