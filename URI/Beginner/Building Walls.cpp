#include <bits/stdc++.h>

using namespace std;

int N, W, v;
char name[101];

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> W;
	
	for (int i = 0;i < N; i++){
		scanf("%s %i\n", name, &v);
		if ( v > W ) cout << name << '\n';
	}

	return 0;
}
/*
input:-
-----------

3 50
Titan Colossal 60
Titan Encoracado 15
Titan Femea 14


output:-
-----------


Problem: 
*/
