#include <bits/stdc++.h>

using namespace std;

int N = 0;
int t = 0, x = 0;

int main () {

	while (cin >> N && !cin.eof()){
		for (int i = 0; i < N; i++){
			cin >> t;
			x = max(x, t);
		}
		cout << ((x >= 20)? 3 : (x >= 10)? 2 : 1) << '\n';
		x = 0;
	}
	
	return 0;
}
/*
input:-
-----------

10 10 10 10 10 15 18 20 15 11 10 10 1 5 2 9 5 5 8 4 4 3 10 19 9 1 4 5 8 6 11 9 7
output:-
-----------


Problem: 
*/
