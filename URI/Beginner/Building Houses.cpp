#include <stdio.h>
#include <cmath>

int A, B, C;

int main () {

	while ( scanf("%d", &A) && A != 0 ){
		scanf("%d %d\n", &B, &C);
		printf("%.0f\n", floor(sqrt((A*B)/(C/100.0))));
	}

	return 0;
}
/*
input:-
-----------
8 10 20
1 10 100
10 3 100
0

output:-
-----------


Problem: 
*/
