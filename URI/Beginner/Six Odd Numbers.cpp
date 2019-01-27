#include <bits/stdc++.h>

using namespace std;

int x = 0;

int main () {
	cin >> x;
	
	x = (x%2 == 0)? x+1 : x;
	
	for (int i = 0; i < 6; i++){
		cout << x << '\n';
		x+=2;
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
