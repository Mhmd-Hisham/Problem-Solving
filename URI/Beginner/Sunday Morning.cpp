#include <bits/stdc++.h>

using namespace std;

int N1 = 0, N2 = 0;

int main () {
	
	while (scanf("%d:%d", &N1, &N2) != EOF){
		N1++;
		printf("Atraso maximo: %d\n", (N1 < 8)? 0 : ((N1-8)*60)+N2 );
	}
	
	return 0;
}
/*
input:-
-----------
7:10
7+1 = 8 ----

7:10
5:00
5:30
6:10
6:00
7:30
7:23
8:00
8:32
8:55
9:00
7:55




output:-
----------


Problem: 
*/
