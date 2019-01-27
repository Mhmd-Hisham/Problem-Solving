#include <bits/stdc++.h>

using namespace std;

int M;
double N, C, dividend, divisor;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	while ( cin >> M && !cin.eof() ){
		dividend = 0; divisor = 0;
		for (int i = 0; i < M; i++){
			cin >> N >> C;
			divisor += C;
			dividend += N*C;
		}
		printf("%.4f\n",dividend/(divisor*100));
	}


	return 0;
}
/*
input:-
-----------

4
75 60
90 61
80 123
84 123
5
75 6
90 61
82 123
80 123
1 26

output:-
-----------


Problem: 
*/
