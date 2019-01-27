#include <bits/stdc++.h>

using namespace std;


int main () {
	float A = 0, B = 0, C = 0, D = 0, DIFERENCA = 0;
	
	cin >> A >> B >> C >> D;
	

	DIFERENCA = (A * B - C * D);


	printf("DIFERENCA = %.f\n", DIFERENCA);
	return 0;
}
/*
input:-
-----------
5
6
7
8
---------

0
0
7
8
---------
5
6
-7
8
---------

output:-
-----------

DIFERENCA = -26
DIFERENCA = -56
DIFERENCA = 86



https://www.urionlinejudge.com.br/judge/en/problems/view/1007



*/
