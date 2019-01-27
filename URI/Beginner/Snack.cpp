#include <bits/stdc++.h>

using namespace std;

int main () {
	int X = 0,Y = 0;
	double N = 0;
	cin >> X >> Y;

	if ( X == 1 ) N = (4.00*Y);
	else if ( X == 2 ) N = (4.50*Y);
	else if ( X == 3 ) N = (5.00*Y);
	else if ( X == 4 ) N = (2.00*Y);
	else N = (1.50*Y);
	
	printf("Total: R$ %.2f\n",N);

	return 0;
}

/*
input:-
-----------


output:-
-----------






Problem: 
*/
