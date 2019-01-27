#include <stdio.h>

unsigned int T, R1, R2;

int main () {
	scanf("%d\n", &T);
	
	while ( T-- ){
		scanf("%d %d\n", &R1, &R2);
		printf("%d\n", R1+R2);
	}
	
	return 0;
}
/*
input:-
-----------

15
1 2
2 3
3 4
4 5
5 6
6 7
9 8
3 3
4 5
12 32
999 999
321 321
215 635
324 909
421 242
output:-
-----------


Problem: 
*/
