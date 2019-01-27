#include <bits/stdc++.h>

using namespace std;

double N = 0, t = 1, n = 0;

int main () {

	while (t > 0){
		cin >> t;
		N += t;//cout << "--------" << N << endl;
		n++;
	}
	n--;
	N-=t;
	printf("%.2f\n",N/n);
	return 0;
}
/*
input:-
-----------


output:-
-----------
34 56 44 23 -2

Problem: 
*/
