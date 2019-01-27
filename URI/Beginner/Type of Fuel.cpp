#include <bits/stdc++.h>

using namespace std;

int t = 0, alcohol = 0, gas = 0, diesel = 0 ;
//Alcohol 2. Gasoline 3. Diesel
int main () {
	
	cin >> t;
	while ( t != 4 ){

		if (t == 1) alcohol++;
		else if (t == 2) gas++;
		else if (t == 3) diesel++;

		cin >> t;
	}

	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alcohol, gas, diesel);
	return 0;
}
/*
input:-
-----------


output:-
-----------


Problem: 
*/
