#include <bits/stdc++.h>

using namespace std;

bool s = true;
long int N = 0, t = 0;

int main () {

	cin >> t;
	while ( cin >> N && !cin.eof() ){
		if ( s ){
			if (t >= N) {s = false;}
			else t = N;
		}
	}
	
	cout << t+1 << '\n';
	return 0;
}

/*
input:-
-----------
1
2
41
5
2
1


output:-
-----------


Problem: 
*/
