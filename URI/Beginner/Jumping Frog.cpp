#include <bits/stdc++.h>

using namespace std;

int P = 0, N = 0, v = 0;
int win = 1;

int main () {
	cin >> P >> N;
	int pipes[N];
	
	cin >> pipes[0];
	for (int i = 1; i < N; i++) {
		cin >> pipes[i];
		v = ((pipes[i-1]+P >= pipes[i]) && (abs(pipes[i-1]-pipes[i]) <= P))? 1 : 0;
		win = min(v, win);
	}
	
	cout << ((win)? "YOU WIN" : "GAME OVER") << '\n';
	return 0;
}
/*
input:-
-----------

1 2 1 3

output:-
-----------


Problem: 
*/
