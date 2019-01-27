#include <bits/stdc++.h>

using namespace std;

int N = 0, t = 0, p = 0, s = 0;

int main () {
	cin >> N;
	cin >> s;
	
	for (int i = 1;i < N; i++){
		cin >> t;
		p = (s > t)? i : p;
		s = min(s, t);
	}
	printf("Menor valor: %d\n", s);
	printf("Posicao: %d\n", p);
	
	return 0;
}
/*
input:-
-----------

10
44 11 46 53 47 21 61 61 75 53

output:-
-----------


Problem: 
*/
