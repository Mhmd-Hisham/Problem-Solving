#include <stdio.h>

int N;

int main () {
	
	while ( scanf("%d", &N) != EOF ){

		for (int i = 0 ; i < N; i++){
			for (int j = 0; j < N; j++){
				if (j == N-i-1) printf("2");
				else if (j == i) printf("1");
				else printf("3");
			}
			printf("\n");
		}
	}


	return 0;
}
/*
1 2 3 4 5 6 7 8 9 10 70

input:-
-----------
4

output:-
-----------
1332
3123
3213
2331




7
1333332
3133323
3313233
3332333
3323133
3233313
2333331


Problem: 
*/







