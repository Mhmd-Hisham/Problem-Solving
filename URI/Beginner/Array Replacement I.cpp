#include <bits/stdc++.h>

using namespace std;

int A[10];

int main () {

	for (int i = 0;i < 10; i++){
		cin >> A[i];
		printf("X[%d] = %d\n", i, (A[i] <= 0)? 1 : A[i]);
	}

	return 0;
}
/*
input:-
-----------

0 -5 63 0 1 4 3 0 3 0
0 -5 63 0 99 5 -4 9 -6 0

output:-
-----------


Problem: 
*/
