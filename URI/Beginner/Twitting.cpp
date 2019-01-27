#include <bits/stdc++.h>

using namespace std;

string L = "", s;

int main () {
	
	while ( getline(cin,s) )
		L += s;
	
	cout << ((L.length()<= 140)? "TWEET" : "MUTE") << '\n';
	return 0;
}
/*
input:-
-----------


output:-
-----------


Problem: 
*/
