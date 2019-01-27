#include <bits/stdc++.h>

using namespace std;

unsigned long long N;

int main () {

	while ( cin >> N && N != -1 ){
		cout << ((N>0)? N-1 : 0) << '\n';
	}
	
	return 0;
}
/*
unsigned long long you dump bitch!
input:-
-----------
inline string ToString( int n ){
	stringstream s;
	s << n;
	return s.str();
}

int ToInt( char s ){
	int n = 0;
	stringstream (s) >> n;
	return n;
}
0 1 10000000000000000000 -1


0
1
10000000000000000000
-1

100

0 0 1

(n=0)? { n = 9; c = 1 }       9,  9
(n>0)? { n-= (C+1); c = 0;}  --, --



100
0 0 1





























output:-
-----------


Problem: 
*/
