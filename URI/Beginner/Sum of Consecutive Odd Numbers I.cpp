#include <bits/stdc++.h>

using namespace std;

int N = 0;
int x = 0, y = 0;

int main () {
	cin >> x >> y;
	
	int b = max(x,y);
	int s = min(x,y);
	
	x = s;
	y = b;

	x = (x%2 == 0)? x+1 : x+2;
	y = (y%2 == 0)? y-1 : y-2;
	
	for (int i = x; i <= y; i+=2)
		N+= i;
	
	printf("%d\n", N);
	return 0;
}
/*
input:-
-----------


output:-
-----------






Problem: 
*/
