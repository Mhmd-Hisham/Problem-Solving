#include <bits/stdc++.h>

using namespace std;

long int S = 0, T = 0, F = 0, N = 0;

int main () {
	cin >> S >> T >> F;
	N = S + F + T;
	N = (N == 24)? 0 : (N > 24)? N-24 : (N>0)? N : (N < 0)? N+24 : 0;
	cout << N << '\n';
	return 0;
}

/*
input:-
-----------
10 7 3
22 6 -2
0 3 -4

output:-
-----------
20
2
23

S (0 ≤ S ≤ 23)
T (1 ≤ T ≤ 12)
F (-5 ≤ F ≤ 5)


Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/2057
*/
