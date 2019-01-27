#include <bits/stdc++.h>

using namespace std;

int A, B, C;

int main () {
	cin >> A >> B >> C;
	
	if ((A-C == 0 || A-B == 0 || A-(C+B) == 0) ||
	   (B-A == 0 || B-C == 0 || B-(A+C) == 0) ||
	   (C-B == 0 || C-A == 0 || C-(A+B) == 0))
	   cout << 'S' << '\n';
	else
		cout << 'N' << '\n';
		
	
	return 0;
}
/*
input:-
-----------
A B C

Brute Force:-
	-A 
	check (+C , +B, +C+B) == 0

	-B,
	check (+A, +C, +C+B) == 0

	-C
	check (+A, +B, +A+B) == 0



output:-
-----------


Problem: 
*/
