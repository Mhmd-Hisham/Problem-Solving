#include <bits/stdc++.h>

using namespace std;

int A[4];

int main () {

	for (int i = 0;i < 4; i++){
		cin >> A[i];
	}
	sort(A,A+4);
	A[0] += A[1];
	A[1] += A[2];
	cout << ((A[0] > A[2] || A[1] > A[3])? 'S' : 'N') << '\n';
	return 0;
}
/*
input:-
-----------


output:-
-----------


Problem: 
*/
