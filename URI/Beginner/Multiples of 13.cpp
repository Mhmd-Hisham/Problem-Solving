#include <bits/stdc++.h>

using namespace std;

int x = 0, y = 0;
int N = 0;

int main () {
	cin >> x >> y;
	
	int b = max(x,y);
	
	for (int i = min(x,y);i <= b; i++){
		if (i%13 != 0) N += i;
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
