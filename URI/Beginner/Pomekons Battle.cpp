#include <bits/stdc++.h>

using namespace std;

int T = 0;
int Ai, Di, Li, B, v1, v2;

int main () {
	cin >> T;
	
	while ( T-- ){
		cin >> B;
		cin >> Ai >> Di >> Li;
		v1 = ((Ai+Di)/2) + ((Li%2 == 0)? B : 0);

		cin >> Ai >> Di >> Li;
		v2 = ((Ai+Di)/2) + ((Li%2 == 0)? B : 0);
		
		cout << ((v1 == v2)? "Empate" : (v2 > v1)? "Guarte" : "Dabriel") << '\n';
		
	}

	return 0;
}
/*
input:-
-----------
3
5
12 23 15
42 12 20
2
52 1 11
1 52 1
3
95 12 22
5 51 21

output:-
-----------


Problem: 
*/
