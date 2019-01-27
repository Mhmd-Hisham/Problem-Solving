#include <bits/stdc++.h>

using namespace std;

string devnull;
double ts = 0, ta = 0, tb = 0;
int N, t, services = 0, attacks = 0, blocks = 0;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	
	while ( N-- ){
		cin >> devnull;
		cin >> t; ts += t;
		cin >> t; ta += t;
		cin >> t; tb += t;
		cin >> t; services += t;
		cin >> t; attacks += t;
		cin >> t; blocks += t;
	}
	printf("Pontos de Saque: %.2f %%.\n", (services/ts)*100.0);
	printf("Pontos de Bloqueio: %.2f %%.\n", (attacks/ta)*100.0);
	printf("Pontos de Ataque: %.2f %%.\n", (blocks/tb)*100.0);

	return 0;
}
/*
input:-
-----------


output:-
-----------


Problem: 
*/
