#include <bits/stdc++.h>

using namespace std;

int N = 0;
int t = 0;
int n = 21, p = 0;

int main () {
	cin >> N;
	
	for (int i = 0;i < N; i++){
		cin >> t;
		if ( n > t ) {p = i; n = t;}
	}

	cout << p+1 << '\n';
	return 0;
}
/*
input:-
-----------


output:-
-----------


Problem: 
*/
