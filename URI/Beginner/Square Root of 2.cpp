#include <stdio.h>

int N;
double sq2, v, r;

int main () {
	scanf("%d", &N);
	sq2 = 0;
	
	r = 2;
	for (int i = 1; i < N ; i++){
		r = 2 + 1/r;
	}
	sq2 = (N)? 1 + 1/r : 1;
	
	printf("%.10lf\n", sq2);
	return 0;
}
/*
input:-
-----------

2 = 1+(1/(2+(1/2)))

2 = 

       1
1 + ---------------
              1
      2 + -----------
                   1
            2 + --------
                   2

1+(1/(2+(1/(2+(1/2)))))


output:-
-----------


Problem: 
*/
