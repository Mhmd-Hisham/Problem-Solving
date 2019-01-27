#include <bits/stdc++.h>

using namespace std;

int main () {
	double P[4], r = 0;

	
	for (int i = 0; i < 4; i++){
		cin >> P[i];
	}
	
	r = P[0]-P[2];
	r *= r;
	r += (P[1]-P[3]) * (P[1]-P[3]);
	
	printf("%.4f\n",sqrt(r));
	return 0;
}
/*
input:-
-----------


output:-
-----------


*/
