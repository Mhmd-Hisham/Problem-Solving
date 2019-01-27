#include <bits/stdc++.h>

using namespace std;

int main () {
	int sh = 0, sm = 0, fh = 0, fm = 0, Nh = 0, Nm = 0;
	
	cin >> sh >> sm >> fh >> fm;

	if (sh < fh) Nh = fh-sh;
	else if ( sh > fh) Nh = (24-sh)+fh;
	else Nh = 24;

	Nm = Nh*60;
	Nm -= sm;
	Nm += fm;
	
	Nh = (Nm/60.0);
	Nm %= 60;

	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", Nh, Nm);
	return 0;
}

/*
input:-
-----------


output:-
-----------



Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1047
*/
