#include <bits/stdc++.h>

using namespace std;

int N = 0;
int A = 0, B = 0;

int main () {
	cin >> A >> B;
	if (A == B) N = A;
	else if (A > B) N = A;
	else N = B;
	
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
