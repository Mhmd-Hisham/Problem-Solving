#include <bits/stdc++.h>

using namespace std;

int N = 0, T = 0;
int x = 0, y = 0;

int main () {
	cin >> T;

	while ( T-- ){
		cin >> x >> y;
	
		x = (x%2 == 0)? x+1 : x;
		for (int i = 0; i < y; i++){
			N+= x;
			x+= 2;
		}
		cout << N << '\n';
		N = 0;
	}
	
	
	return 0;
}

/*
input:-
-----------
2 4 3 11 2

output:-
-----------



Problem: 
*/

