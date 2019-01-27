#include <bits/stdc++.h>

using namespace std;

int V = 0;
int N[10];

int main () {
	cin >> V;
	
	for (int i = 0;i < 10; i++){
		N[i] = V;
		printf("N[%d] = %d\n", i, V);
		V *= 2;
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
