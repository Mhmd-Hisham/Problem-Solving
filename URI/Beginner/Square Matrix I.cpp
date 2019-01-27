#include <bits/stdc++.h>

using namespace std;

int N = 0, t = 0;
int a = 0, b = 0;

int main () {
	cin >> t;
	
	while ( t != 0 ){
		for (int i = 0; i < t; i++){
			cout << "  ";
			for (int j = 0; j < t; j++){
				a = min(i + 1, t - j);
				b = min(j + 1, t - i);
				
				cout <<  min(a,b) << setw(((j == t-1)? 0 : 4));
			}
			cout << '\n';
		}
		cout << '\n';
		cin >> t;
	}

	return 0;
}
/*
input:-
-----------
5 0

1 2 3 4 5 0

output:-
-----------

SOLVED WITH SOME HELP!
Problem: 
*/
