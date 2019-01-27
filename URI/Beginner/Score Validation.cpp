#include <bits/stdc++.h>

using namespace std;

double N = 0, t = 0, n = 0;

int main () {
	
	while ( n < 2 ){
		cin >> t;
		if ((t>10)||(t<0))
			cout << "nota invalida\n";

		else {N+=t; n++;}

	}
	printf("media = %.2f\n",(N/2));

	return 0;
}
/*
input:-
-----------
-3.5
3.5
11.0
10.0

output:-
-----------


Problem: 
*/
