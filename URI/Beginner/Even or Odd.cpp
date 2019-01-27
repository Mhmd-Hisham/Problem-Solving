#include <bits/stdc++.h>

using namespace std;

int N = 0;
int t = 0;
string m = "";

int main () {
	cin >> N;
	
	for (int i = 0;i < N; i++){
		cin >> t;
		if ( t == 0 ) m += "NULL";
		else {
			if (t%2 == 0) m += "EVEN";
			else m += "ODD";
			
			if (t > 0) m += " POSITIVE";
			else m += " NEGATIVE";
		}
		m += '\n';
	}

	cout << m;
	return 0;
}
/*
input:-
-----------


output:-
-----------


Problem: 
*/
