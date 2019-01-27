#include <bits/stdc++.h>

using namespace std;

int N, M, t, X1, Y1, X2, Y2, x, N;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	while ( cin >> N >> M && !cin.eof() ){
		t = N*M;

		for (int i = 0; i < t; i++){
			cin >> x;
			N |= (x<<1);
		}
		
		cout << (abs(X1-X2)+abs(Y1-Y2)) << '\n';
	}
	return 0;
}

/*
input:-
-----------

			if (x) {
				if (x == 1) {
					X1 = i/M;
					Y1 = i-(X1*M);
				}
				else {
					X2 = i/M;
					Y2 = i-(X2*M);
				}
			}

3 3
0 2 0
1 0 0
0 0 0

(0,1)
(1,0)



3 3
0 0 2
0 0 0
1 0 0

3 3
0 1 0
2 0 0
0 0 0

3 3
0 2 0
0 1 0
0 0 0

3 3
0 2 0
0 0 0
0 1 0


3 3
0 0 2
0 0 0
0 0 1



3 3
2 0 0
0 0 0
1 0 0

2

output:-
-----------


Problem: 
*/
