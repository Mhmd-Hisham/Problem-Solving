#include <bits/stdc++.h>

using namespace std;

int t;
double n, N;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	while ( cin >> N && !cin.eof() ){
		n = 0;
		for (int i = 0; i < N; i++){
			cin >> t;
			if (t) n++;
		}
		cout << ((n >= (N*2)/3)? "impeachment" : "acusacao arquivada") << '\n';
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
