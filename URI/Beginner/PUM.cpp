#include <bits/stdc++.h>

using namespace std;

int N = 0, x = 1;

int main () {
	cin >> N;
	
	for (int i = 0;i < N; i++){
		printf("%d %d %d PUM\n", x, x+1, x+2);
		x+= 4;
	}

	return 0;
}
/*
input:-
-----------


output:-
-----------


Problem: 
*/
