#include <bits/stdc++.h>

using namespace std;

int N, Q, t;

int main () {
	
	while (cin >> N >> Q && !cin.eof()){
		int C[N];
		for (int i = 0; i < N; i++)
			cin >> C[i];
		
		sort(C,C+N);
		reverse(C,C+N);
		for (int i = 0; i < Q; i++){
			cin >> t;
			cout << C[t-1] << '\n';
		}
		
	}
	return 0;
}
/*
input:-
-----------
6 5 30 30 40 250 100 15 1 5 3 2 4

output:-
-----------


Problem: 
*/
