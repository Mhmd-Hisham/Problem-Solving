#include <stdio.h>
#include <cmath>

double N;

int main () {
	scanf("%lf\n", &N);
	N /= log(N);
	printf("%.1lf %.1lf\n", N, N*1.25506);

	return 0;
}
/*
input:-
-----------


output:-
-----------


Problem: 
*/
