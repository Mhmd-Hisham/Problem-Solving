#include <bits/stdc++.h>

using namespace std;

int N = 0, v = 0;
int M2, M3, M4, M5;

int main () {
	cin >> N;
	M2 = 0, M3 = 0, M4 = 0, M5 = 0;
	
	for (int i = 0;i < N; i++){
		cin >> v;
		
		M2 += (v%2 == 0)? 1 : 0;
		M3 += (v%3 == 0)? 1 : 0;
		M4 += (v%4 == 0)? 1 : 0;
		M5 += (v%5 == 0)? 1 : 0;
		
	}
	
	printf("%d Multiplo(s) de 2\n", M2);
	printf("%d Multiplo(s) de 3\n", M3);
	printf("%d Multiplo(s) de 4\n", M4);
	printf("%d Multiplo(s) de 5\n", M5);
	return 0;
}
/*
input:-
-----------


output:-
-----------


Problem: 
*/
