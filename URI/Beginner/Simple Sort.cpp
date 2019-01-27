#include <bits/stdc++.h>

using namespace std;


int main () {
	int A = 0, B = 0, C = 0;
	
	cin >> A >> B >> C;
	
	int S[3] = {A, B, C};

	sort(S,S+3);
	for (int i = 0; i < 3; i++)
		cout << S[i] << "\n";

	cout << "\n" << A << "\n" << B << "\n" << C << "\n";

	return 0;
}
/*
input:-
-----------


output:-
-----------






Problem: 
*/
