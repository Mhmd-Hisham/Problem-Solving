#include <stdio.h>

int N,C, n;
int notes[6] = {100, 50, 20, 10, 5, 2};
int coins[5] = {50, 25, 10, 5, 1};

int main () {
	scanf("%d.%d", &N, &C);
	
	printf("NOTAS:\n");
	for (int i = 0; i < 6; i++, n = 0){
		if (N/notes[i] > 0) {n = N/notes[i]; N -= (n*notes[i]);}
		printf("%d nota(s) de R$ %d.00\n",n, notes[i]);
	}
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", N);
	for (int i = 0; i < 5; i++, n = 0){
		if (C/coins[i] > 0) {n = C/coins[i]; C -= (n*coins[i]);}
		printf("%d moeda(s) de R$ 0.%.2d\n",n, coins[i]);
	}
	
	return 0;
}

// https://www.urionlinejudge.com.br/judge/en/problems/view/1021

