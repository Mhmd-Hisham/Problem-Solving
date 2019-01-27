#include <bits/stdc++.h>

using namespace std;

double N = 0, t = 0, n = 0;

int main () {
	
	while ( true ){
		cin >> t;
		
		if ((t>10)||(t<0))
			cout << "nota invalida\n";

		else {N+=t; n++;}

		if (n == 2) {
			printf("media = %.2f\n",(N/2));
			cin >> t;
			cout << "novo calculo (1-sim 2-nao)\n";// good
			while ( !((t == 1) or (t == 2)) ){
				cout << "novo calculo (1-sim 2-nao)\n";
				cin >> t;
			}
			if (t == 2) break;
			else n = 0; N = 0;
		}
	}

	return 0;
}
/*
input:-
-----------
-3.5
3.5
11.0
10.0
4
1
8.0
9.0
2

output:-
-----------


Problem: 
*/
