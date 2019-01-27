#include <bits/stdc++.h>

using namespace std;

int N = 0, x = 0, t = 0;

int main () {
	cin >> N;
	
	while ( N-- ){
		cin >> x;
		for (int i = 1; i < x; i++) {
			if (x%i == 0) t += i;
		}
		if (t == x) cout << x << " eh perfeito\n";
		else cout << x << " nao eh perfeito\n";
		t = 0;
	}
	
	return 0;
}
/*
input:-
-----------


output:-
-----------


Problem: 
*/
