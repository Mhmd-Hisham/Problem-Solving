#include <bits/stdc++.h>

using namespace std;

int N[20];


int main () {
	
	for (int i = 0;i < 20; i++){
		cin >> N[i];
	}
	for (int i = 19; i >= 0; i--)
		printf("N[%d] = %d\n", 19-i, N[i]);

	return 0;
}
/*
input:-
-----------

-54
-78
-84
89
16
28
91
-4
84
-95
-15
-23
20
-17
30
-75
54
85
23
5
output:-
-----------


Problem: 
*/
