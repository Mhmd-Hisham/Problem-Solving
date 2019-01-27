#include <bits/stdc++.h>

using namespace std;

int main () {
	double X = 0, Y = 0;
	cin >> X >> Y;
	
	if (X == 0){
		if (Y == 0) printf("Origem\n");
		else printf("Eixo Y\n");
	}
	else if ( Y == 0 ) printf("Eixo X\n");
	else if (X > 0){
		if (Y > 0) printf("Q1\n");
		else printf("Q4\n");
	}

	else {
		if (Y > 0) printf("Q2\n");
		else printf("Q3\n");
	}
	

	return 0;
}
/*
input:-
-----------
4.5 -2.2

output:-
-----------






Problem: 
*/
