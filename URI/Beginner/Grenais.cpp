#include <bits/stdc++.h>

using namespace std;


int x = 0, y = 0, t = 0, n = 0;
int Inter = 0;
int Gremio = 0;
int draw = 0;

int main () {
	
	while ( true){
		cout << "Novo grenal (1-sim 2-nao)\n";
		cin >> x >> y >> t;
		n++;
		if ( x > y ) Inter++;
		else if (x < y) Gremio++;
		else draw++;
		if (t != 1) break;
	}
	
	printf("%d grenais\n",n);
	printf("Inter:%d\n",Inter);
	printf("Gremio:%d\n",Gremio);
	printf("Empates:%d\n",draw);

	if (Inter > Gremio) printf("Inter venceu mais\n");
	else if (Gremio > Inter) printf("Gremio venceu mais\n");
	else printf("Não houve vencedor\n");

	return 0;
}
/*
input:-
-----------
3 2 1 2 3 1 3 1 2

output:-
-----------


Problem: 
*/
