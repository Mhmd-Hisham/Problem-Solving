#include <bits/stdc++.h>

using namespace std;

int N = 0, p = 0;
int t = 0;
int main () {
	for (int i = 1;i < 101; i++){
		cin >> t;
		if (t > N) {N = t; p = i;}
	}

	cout << N << '\n' << p << '\n';
	return 0;
}
/*
input:-
-----------
2 113 45 34565 1
6 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
9 10 11 21 123







output:-
-----------


Problem: 
*/
