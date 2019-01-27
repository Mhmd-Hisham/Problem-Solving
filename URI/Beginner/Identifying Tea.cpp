#include <bits/stdc++.h>

using namespace std;

int t = 0;
int T = 0, N = 0;

int main () {
	cin >> T;
	
	for (int i = 0; i < 5; i++){
		cin >> t;
		N += (T == t)? 1 : 0;
	}
		
	cout << N << '\n';
	return 0;
}
/*
input:-
-----------


output:-
-----------


Problem: 
*/
