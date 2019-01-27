#include <bits/stdc++.h>

using namespace std;

int main () {
	double s = 0, tax = 0;
	cin >> s;//4520.00

	if ( s <= 2000.00 ) {cout << "Isento\n"; return 0;}
	else{
		s -= 2000.00;
		tax += (s-1000 > 0)? 80.0 : ((s/100.0)*8.0);s -= 1000;
		if (s > 0) tax += (s-1500 > 0)? 270.0: ((s/100.0)*18.0); s -= 1500;
		if (s > 0) tax += ((s/100)*28.0);
	}
	
	printf("R$ %.2f\n", tax);
	
	return 0;
}

/*
input:-
-----------


output:-
-----------



Problem: 
*/
