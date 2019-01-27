#include <bits/stdc++.h>

using namespace std;

int N = 0;
int T = 0;
int PA = 0, PB = 0;
double GA = 0, GB = 0;

int main () {
	cin >> T;
	
	while ( T-- ){
		cin >> PA >> PB >> GA >> GB;

		N = ((PB*GB)/100)/((PA*GA)/100);
		if (N <= 100) cout << N << " anos.\n";
		else cout << "Mais de 1 seculo.\n";
		N = 0;
	}
	
	return 0;
}
/*
input:-
-----------

6 100 150 1.0 0 90000 120000 5.5 3.5 56700 72000 5.2 3.0 123 2000 3.0 2.0 100000 110000 1.5 0.5 62422 484317 3.1 1.0

output:-
-----------


Problem: 
*/
