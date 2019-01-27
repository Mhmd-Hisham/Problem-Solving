#include <bits/stdc++.h>
using namespace std;

int N;

int main () {
	
	while ( cin >> N && N ){
		
		for (int i = 0; i < N; i++){
			for (int j = 0; j < N; j++){
				cout << right << setw( (j == 0)? 3 : 4 ) << ((i==j)? 1 : abs(i-j)+1);
			}
			cout << '\n';
		}
		cout << '\n';
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
