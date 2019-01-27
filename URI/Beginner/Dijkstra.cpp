#include <bits/stdc++.h>

using namespace std;

string t;
set<string> jewelry;

int main () {

	while (!cin.eof()){
		cin >> t;
		jewelry.insert(t);
	}

	cout << jewelry.size() << '\n';
	return 0;
}
/*
input:-
-----------
((
))
((
))
(


output:-
-----------


Problem: 
*/
