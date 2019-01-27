#include <bits/stdc++.h>

using namespace std;

int N, s, x, y;

//Euclid's algorithm GCD (Greatest common divisor)
int gcd(int a, int b) {
	if ( b == 0 ) return a;
	return gcd(b, a%b);
}

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;

	while ( N-- ){
		cin >> x >> y;
		if (x > y) {s = y; y = x; x = s;}
		cout << gcd(x,y) << '\n';
	}


	return 0;
}
/*
input:-
-----------

3
8 12
9 27
259 111

output:-
-----------


Problem: 
*/
