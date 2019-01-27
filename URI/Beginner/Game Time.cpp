#include <bits/stdc++.h>

using namespace std;

int main () {
	int S = 0, E = 0, N = 0;
	
	cin >> S >> E;

	if (S < E) N = E-S;
	else if ( S > E) N = (24-S)+E;
	else N = 24;

	printf("O JOGO DUROU %d HORA(S)\n", N);
	return 0;
}

/*
input:-
-----------


output:-
-----------



Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1046
*/
