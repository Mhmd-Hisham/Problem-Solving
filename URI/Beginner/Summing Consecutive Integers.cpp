#include <bits/stdc++.h>

using namespace std;

int N = 0, A = 0, S = 0;

int main () {
	cin >> A >> N;
	
	while ( N <= 0 ) cin >> N;
	for (int i = 0;i < N; i++) {S += A; A++;}
	cout << S << '\n';

	return 0;
}
