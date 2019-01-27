#include <bits/stdc++.h>

using namespace std;

long int N = 0,t = 0;
long int l1 = 0, l2 = 1;

int main () {
	cin >> N;
	if (N == 1) {cout << 0 << '\n'; return 0;}
	else if ( N == 2) {cout << "0 1\n"; return 0;}
	else {
		cout << "0,1,";
		for (int i = 0;i < N-3; i++){
			t = l1+l2;
			cout << t << ",";
			l1 = l2;
			l2 = t;
		}
		cout << l1+l2 << '\n';
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
