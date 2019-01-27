#include <bits/stdc++.h>

using namespace std;

int N, M, L, Cm, Cl, A;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	while (cin >> N >> M >> L && !cin.eof()){
		int Mc[M][N], Ml[L][N];
		
		for (int i = 0; i < M; i++){
			for (int j = 0; j < N; j++){
				cin >> Mc[i][j];
			}
		}

		for (int i = 0; i < L; i++){
			for (int j = 0; j < N; j++){
				cin >> Ml[i][j];
			}
		}
		
		cin >> Cm >> Cl >> A;
		A--;
		Cl--;
		Cm--;
		
		if (Mc[Cm][A] == Ml[Cl][A]) cout << "Empate\n";
		else if (Mc[Cm][A] > Ml[Cl][A]) cout << "Marcos\n";
		else cout << "Leonardo\n";
		
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
