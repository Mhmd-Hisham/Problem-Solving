#include <bits/stdc++.h>

using namespace std;

double N = 0;

int main () {
	cin >> N;
	
	for (int i = 0; i < 100; i++){
		printf("N[%d] = %.4f\n", i, N);
		N /= 2;
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
