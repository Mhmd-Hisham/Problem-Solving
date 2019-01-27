#include <bits/stdc++.h>

using namespace std;

int N, M;
int matrix[101][101];

int getcell(int i1, int j2){
	return (j2 < M && i1 < N && i1 != -1 && j2 != -1)? matrix[i1][j2] : 0;
}

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	while (cin >> N >> M && !cin.eof()){
		memset(matrix, 0, sizeof(int)*N*M);
		
		for (int i = 0; i < N; i++){
			for (int j = 0; j < M; j++){
				cin >> matrix[i][j];
			}
		}

		for (int i = 0; i < N; i++){
			for (int j = 0; j < M; j++){
				if (matrix[i][j]) cout << 9;
				else {cout << (getcell(i-1, j) + getcell(i+1, j) + getcell(i, j+1) + getcell(i, j-1));}
			}
			cout << '\n';
		}
	}
	
	return 0;
}
/*
input:-
-----------
4 4 0 0 1 1 0 1 0 1 0 0 1 0 1 1 0 1 1 2 0 1


4 4
0 0 1 1
0 1 0 1
0 0 1 0
1 1 0 1
1 2
0 1

0299
1949
1393
9939
19

output:-
-----------


Problem: 
*/
