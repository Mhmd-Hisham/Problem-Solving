#include <bits/stdc++.h>

using namespace std;

int N = 0, t = 0;
int l = 0;

string TOString( int n ){
	stringstream m;
	m << n;
	return m.str();
}

int main () {
	cin >> t;
	
	while ( t != 0 ){
		N = int(pow(2.0,double((t-1)*2)));
		N = TOString(N).length()+1;
		for (double i = 0; i < t; i++){
			for (double j = 0; j < t; j++){
				l = max(int(pow(2.0,j+i)),1);
				cout << setw( (j == 0)? N-1 : N ) << l;
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


Problem: 
*/
