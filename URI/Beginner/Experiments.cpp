#include <bits/stdc++.h>

using namespace std;

char type;
int total = 0;
int T = 0, t = 0;
double rats = 0, rabbits = 0, frogs = 0;

int main () {
	cin >> T;

	while ( T-- ){
		cin >> t >> type;
		total += t;
		if (type == 'C') rabbits+= t;
		else if (type == 'R') rats+= t;
		else if (type == 'S') frogs+=t;
	}

	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %.0f\n", rabbits);
	printf("Total de ratos: %.0f\n", rats);
	printf("Total de sapos: %.0f\n", frogs);
	printf("Percentual de coelhos: %.2f %%\n", (rabbits/total)*100);
	printf("Percentual de ratos: %.2f %%\n", (rats/total)*100);
	printf("Percentual de sapos: %.2f %%\n", (frogs/total)*100);

	return 0;
}
/*
input:-
-----------


output:-
-----------


Problem: 
*/
