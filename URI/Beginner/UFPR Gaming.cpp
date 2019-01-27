#include <bits/stdc++.h>

using namespace std;

bool s;
int N, I, id, n;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	while ( cin >> N >> I && !cin.eof() ){
		n = 0;
		for (int i = 0; i < N; i++){
			cin >> id >> s;
			if (id == I) {if (!s) n++;}
		}
		
		cout << n << '\n';
	}

	return 0;
}
/*
input:-
-----------


output:-
-----------


Problem: 
*/
