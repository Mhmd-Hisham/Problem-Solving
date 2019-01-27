#include <bits/stdc++.h>

using namespace std;

int N = 0, x = 0;
bool isprime;

int main () {
	cin >> N;
	
	while ( N-- ){
		cin >> x;
		isprime = true;
		if ( x < 2 ) isprime = false;
		else if ( x > 2 ){
			for (int i = 2;i < (x/2)+1; i++)
				if (x%i == 0) {isprime = false; break;}
		}
		if (isprime) cout << x << " eh primo\n";
		else cout << x << " nao eh primo\n";
	}

	return 0;
}
/*
input:-
-----------
3 8 51 7

3 1 0 11
output:-
-----------
49 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49

Problem: 
*/
