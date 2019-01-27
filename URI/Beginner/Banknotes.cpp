#include <bits/stdc++.h>

using namespace std;

int main () {
	int N = 0;
	int Banknotes[] = {100, 50, 20, 10, 5, 2, 1};
	int needed[] = {0, 0, 0, 0, 0, 0, 0};
	
	cin >> N;
	
	printf("%d\n", N);
	for (int i = 0; i < 7; i++){
		if (!( 1 > N/Banknotes[i] )){
			needed[i] += N/Banknotes[i];
			N -= (N/Banknotes[i] * Banknotes[i]);
		}
		printf("%d nota(s) de R$ %d,00\n",needed[i],Banknotes[i]);
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
