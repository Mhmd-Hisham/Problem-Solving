#include <bits/stdc++.h>

using namespace std;

int T = 0;
int H = 0, M = 0, O = 0;

int main () {
	cin >> T;
	
	for (int i = 0;i < T; i++){
		cin >> H >> M >> O;
		printf("%.2d:%.2d - A porta %s!\n",H, M, ((O == 1)? "abriu" : "fechou"));
	}

	return 0;
}
/*
input:-
-----------
3
15 30 1
23 50 0
0 5 1

output:-
-----------


Problem: 
*/
