#include <stdio.h>

int N;
double sq10 = 0, r = 6;

int main () {
	scanf("%d", &N);

	for (int i = 1; i < N ; i++){
		r = 6 + 1/r;
	}
	sq10 = (N)? 3 + 1/r : 3;
	
	printf("%.10lf\n", sq10);
	return 0;
}
/*
input:-
-----------


output:-
-----------


Problem: 
*/
