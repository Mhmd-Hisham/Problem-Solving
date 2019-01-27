#include <cmath>
#include <stdio.h>

int N;
float x;

int main () {
	scanf("%d\n", &N);
	
	while ( N-- ){
		scanf("%f", &x);
		printf("%d dias\n", int(ceil(log2(x))));
	
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
