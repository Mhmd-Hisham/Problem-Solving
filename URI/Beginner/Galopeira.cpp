#include <bits/stdc++.h>

using namespace std;

int N = 0;
string s;

int main () {
	cin >> N;
	
	while ( N-- ){
		cin >> s;
		printf("%.2f\n", 0.01*s.length());
	}

	return 0;
}
/*
input:-
-----------
3
galopeira
galopeeeeeeeeeeeeeeeeeira
galopeeira
ge


output:-
-----------


Problem: 
*/
