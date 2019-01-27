#include <bits/stdc++.h>

using namespace std;

int main () {
	int A = 0, B = 0;
	int Big = 0, Min = 0;
	cin >> A >> B;

	Big = max(A,B);
	Min = min(A,B);
	
	if (Big % Min == 0) printf("Sao Multiplos\n");
	else printf("Nao sao Multiplos\n");

	return 0;
}
/*
input:-
-----------


output:-
-----------



Problem: 
*/
