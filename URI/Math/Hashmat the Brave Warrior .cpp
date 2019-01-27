#include <stdio.h>
#include <cmath>

long long int a, b;

int main () {
	
	while (	scanf("%lld %lld", &a, &b) != EOF ){
		a = std::abs(a-b);
		printf("%lld\n", a);
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
