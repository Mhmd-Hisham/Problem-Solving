#include <bits/stdc++.h>

using namespace std;

double A[6] = {0,0,0,0,0,0};
int N = 0;
double R = 0;

int main () {
	
	for (int i = 0; i < 6; i++){
		cin >> A[i];
		if (A[i] > 0){N++; R += A[i];}
	}
	
	printf("%d valores positivos\n%.1f\n", N,R/N);
	return 0;
}
/*
input:-
-----------


output:-
-----------




Problem: 
*/
