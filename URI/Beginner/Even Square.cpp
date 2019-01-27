#include <bits/stdc++.h>

using namespace std;

int N = 0;

int main () {
	cin >> N;
	
	N = (N%2 == 0)? N : N-1;
	for (int i = 2; i <= N; i+= 2){
		printf("%d^2 = %d\n", i, i*i);
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
