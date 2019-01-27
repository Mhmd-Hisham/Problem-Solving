#include <bits/stdc++.h>

using namespace std;

int N = 0;

int factorial(int n){
	if ( n <= 1 ) return 1;
	return n*factorial(n-1);
}


int main () {
	cin >> N;
	
	cout << factorial(N) << '\n';
	return 0;
}
/*
input:-
-----------


output:-
-----------


Problem: 
*/
