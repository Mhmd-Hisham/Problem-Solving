#include <bits/stdc++.h>

using namespace std;

string L = "", s;

int main () {
	
	while ( getline(cin,s) && !cin.eof() )
		L += s;
	
	cout << ((L.length()<= 80)? "YES" : "NO") << '\n';
	return 0;
}
/*
input:-
-----------


output:-
-----------


Problem: 
*/
