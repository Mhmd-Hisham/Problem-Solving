#include <bits/stdc++.h>

using namespace std;

int N, Amin, Amax, t , n;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	while (cin >> N >> Amin >> Amax){
		n = 0;
		for (int i = 0; i < N; i++)	{
			cin >> t;
			if (t >= Amin) {if (t <= Amax) n++;}
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
