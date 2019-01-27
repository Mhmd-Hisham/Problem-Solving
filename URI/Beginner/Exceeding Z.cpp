#include <bits/stdc++.h>

using namespace std;

int n = 1, t = 0;
int x = 0, z = 0;

int main () {
	cin >> x >> z;
	t = x;
	
	while (z <= x) cin >> z;
	while (t <= z){
		x++;
		t += x;
		n++;
	}

	cout << n << '\n';
	
	return 0;
}
/*
input:-
-----------


output:-
-----------


Problem: 
*/
