#include <bits/stdc++.h>

using namespace std;

int main () {
	int C[2], U[2];
	float P[2], to_pay = 0;
	
	
	for (int i = 0; i < 2; i++) {
		cin >> C[i] >> U[i] >> P[i];
		to_pay += U[i] *P[i];
	}
	
	

	printf("VALOR A PAGAR: R$ %.2f\n",to_pay);
	return 0;
}
/*
input:-
-----------
12 1 5.30
16 2 5.10

output:-
-----------



https://www.urionlinejudge.com.br/judge/en/problems/view/1010



*/
