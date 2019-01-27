#include <bits/stdc++.h>

using namespace std;


int main () {
	double a = 0, b = 0, c = 0;
	
	cin >> a >> b >> c;

	if (a == 0)
		printf("Impossivel calcular\n");

	else {
		double t = ((b*b)-(4*a*c));
		if ( t < 0 ){
			printf("Impossivel calcular\n");
			return 0;
		}

		printf("R1 = %.5f\nR2 = %.5f\n",( -b+sqrt(t) )/(2*a), ( -b-sqrt(t) )/(2*a));
	}

	return 0;
}
/*
**********************************************
input:-
-----------
10.0 20.1 5.1

output:-
-----------
R1 = -0.29788
R2 = -1.71212
**********************************************
input:-
-----------
10.3 203.0 5.0

output:-
-----------
R1 = -0.02466
R2 = -19.68408
**********************************************
input:-
-----------
0.0 20.0 5.0

output:-
-----------
Impossivel calcular  Done!
**********************************************
input:-
-----------
10.0 3.0 5.0

output:-
-----------
Impossivel calcular Done!
==============================================



Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1036
*/
