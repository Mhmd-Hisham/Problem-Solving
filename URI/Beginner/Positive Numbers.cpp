#include <bits/stdc++.h>

using namespace std;

double A[6] = {0,0,0,0,0,0};
int N = 0;

int main () {
	
	for (int i = 0; i < 6; i++){
		cin >> A[i];
		N += (A[i] > 0)? 1 : 0;
	}
	
	printf("%d valores positivos\n", N);
	return 0;
}
/*
input:-
-----------


output:-
-----------






Problem: 
*/
