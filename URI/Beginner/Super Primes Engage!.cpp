#include <bits/stdc++.h>

using namespace std;

int N;
string S, answer;

inline string ToString( int n ){
	stringstream s;
	s << n;
	return s.str();
}

bool isprime( int n ){
	if ( n < 2 ) return false;

	if ( n > 2 ){
		for (int i = 2;i < (n/2)+1; i++)
			if (n%i == 0) return false;
	}
	
	return true;
}

int main () {

	while ( cin >> N && !cin.eof() ){
		S = ToString(N);
		answer = "Nada";
		
		if ( isprime(N) ){
			answer = "Super";
			for (int i = 0;i < S.length(); i++){
				if ( !isprime((S[i] - '0')) ){
					answer = "Primo";
					break;
				}
			}
		}

		cout << answer << '\n';

	}
	return 0;
}
/*
input:-
-----------
23
33
43

output:-
-----------


Problem: 
*/
