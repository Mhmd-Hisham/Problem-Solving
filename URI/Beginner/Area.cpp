#include <bits/stdc++.h>

using namespace std;

int main () {
	double A = 0, B = 0, C = 0, pi = 3.14159;
	cin >> A >> B >> C;
	
	printf("TRIANGULO: %.3f\n", (1/2.0)*A*C);
	printf("CIRCULO: %.3f\n", C*C*pi);
	printf("TRAPEZIO: %.3f\n", ((A+B)/2)*C);
	printf("QUADRADO: %.3f\n", B*B);
	printf("RETANGULO: %.3f\n", (A*B));

	return 0;
}
/*
input:-
-----------
3.0 4.0 5.2

12.7 10.4 15.2
output:-
-----------
TRIANGULO: 7.800
CIRCULO: 84.949
TRAPEZIO: 18.200
QUADRADO: 16.000
RETANGULO: 12.000


TRIANGULO: 96.520
CIRCULO: 725.833
TRAPEZIO´: 175.560
QUADRADO: 108.160
RETANGULO: 132.080

700000000000.0 800000000000.0 900000000000.0

https://www.urionlinejudge.com.br/judge/en/problems/view/1012

*/
