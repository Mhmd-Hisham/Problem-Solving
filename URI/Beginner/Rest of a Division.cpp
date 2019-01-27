#include <bits/stdc++.h>

using namespace std;

int x = 0, y = 0;
int t = 0;

int main () {
	cin >> x >> y;
	
	int b = max(x,y);
	for (int i = min(x,y)+1;i < b; i++){
		t = (i%5);
		if ((t == 3) or (t == 2)) cout << i << '\n';
		t = 0;
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
