#include <stdio.h>
#include <math.h>

double Xf, Yf, Xi, Yi, Vi, R1, R2, l, D;

int main () {

	while ( scanf("%lf %lf %lf %lf %lf %lf %lf\n", &Xf, &Yf, &Xi, &Yi, &Vi, &R1, &R2) != EOF ) {
		
		l = sqrt( ((Xf-Xi)*(Xf-Xi))+((Yf-Yi)*(Yf-Yi)) )+(Vi*1.5);
		
		printf("%c\n", ((l<=R1+R2)? 'Y' : 'N' ));
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
