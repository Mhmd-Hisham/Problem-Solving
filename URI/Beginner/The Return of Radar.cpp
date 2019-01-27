#include <stdio.h>

int N, T, v;

int main () {
	
	while ( scanf("%d", &N) && N ){
		for (int i = 0; i < N; i++){
			scanf("%d", &v);
			printf("%d\n", ((v%2==0)? 2*v-2 : 2*v-1));
		} 
		
	}
	

	return 0;
}
/*
input:-
-----------
5
17
32
9
21
3
3
6
10
35
5
51
52
34
65
60
0

output:-
-----------


Problem: 
*/
