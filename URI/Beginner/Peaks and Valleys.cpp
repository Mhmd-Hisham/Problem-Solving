#include <stdio.h>

bool c = 1, r = 1;
int N, t1, t2;

int main () {
	scanf("%d", &N);

	scanf("%d %d", &t1, &t2);
	if (t1 > t2) r = 0;
	else if (t1 < t2) r = 1;
	else c = 0;
	t1 = t2;
	for (int i = 2; i < N && c; i++){
		scanf("%d", &t2);
		
		if ((t1 < t2) == !r) {r = !r;c = !(t1==t2);}
		else c = 0;
		t1 = t2;
	}
	printf("%d\n", c);

	return 0;
}
/*
5
100 99 112 -8 -7

3
1 4 -2

4
1 2 2 1


input:-
-----------
2
-1 -1

output:-
-----------


Problem: 
*/
