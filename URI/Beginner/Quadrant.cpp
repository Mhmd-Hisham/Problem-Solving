#include <bits/stdc++.h>

using namespace std;

int x = 0, y = 1;

int main () {
	cin >> x >> y;
	
	while ((y != 0) and (x != 0)){
		if (y > 0){
			if (x > 0) cout << "primeiro\n";
			else cout << "segundo\n";
		}
		else{
			if (x > 0) cout << "quarto\n";
			else cout << "terceiro\n";
		}
		cin >> x >> y;
	}
	

	return 0;
}
/*
input:-
-----------
2 2
3 -2
-8 -1
-7 1
0 2

output:-
-----------


Problem: 
*/
