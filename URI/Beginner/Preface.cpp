#include <stdio.h>
#include <algorithm>

int a, b, R, Q;

int main () {
	scanf("%d %d\n", &a, &b);
	printf("%d %d\n", int(a/b), int(a%b));
	return 0;
}
/*
a = b × q + r

input:-
-----------
7 = 3 * q + r


a - r = b * q
r = -a + b* q
r = b*q - a

q = int(a/b)
r = ?

a/b = q+r







r = -a*(b*q)
r = -7*3*q


q = (a - r)/b
q = (7-r)/3

output:-
-----------


Problem: 
*/
