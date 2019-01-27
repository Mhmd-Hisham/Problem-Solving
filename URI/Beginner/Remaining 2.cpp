#include <bits/stdc++.h>

using namespace std;

int N = 0;
int main () {
	cin >> N;
	
	for (int i = 2; i < 10000; i++){
		if ( i%N == 2 ) cout << i << '\n';
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
