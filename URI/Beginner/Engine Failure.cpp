#include <bits/stdc++.h>

using namespace std;

int N = 0, t1, t2, p;

int main () {
	cin >> N;
	
	cin >> t1;
	for (int i = 1;i < N; i++){
		cin >> t2;
		if (t1 > t2) {p = i+1; break;}
		t1 = t2;
	}

	cout << p << '\n';
	return 0;
}
/*
input:-
-----------


output:-
-----------


Problem: 
*/
