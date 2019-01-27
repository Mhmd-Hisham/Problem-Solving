#include <bits/stdc++.h>

using namespace std;

int N = 0, devnull = 0;
string name;

int main () {
	cin >> N;
	
	while ( N-- ){
		cin >> name >> devnull;
		cout << ((name == "Thor")? 'Y' : 'N') << '\n';
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
