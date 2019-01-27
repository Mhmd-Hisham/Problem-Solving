#include <bits/stdc++.h>

using namespace std;

int N = 0;
double t1, t2, maxrecord;

int main () {

	while (cin >> N && !cin.eof()){
		maxrecord = 0;
		for (int i = 0; i < N; i++){
			cin >> t1 >> t2;
			if (t2/t1 > maxrecord) {
				cout << i+1 << endl;
				maxrecord = t2/t1;
			}
		}
	}

	return 0;
}
/*

input:-
-----------
3
1 1
2 1
2 3
2
2 16
4 20

output:-
-----------


Problem: 
*/
