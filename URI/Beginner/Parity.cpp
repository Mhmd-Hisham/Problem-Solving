#include <bits/stdc++.h>

using namespace std;

int n = 0;
string s = "";

int main () {
	cin >> s;
	
	for (int i = 0;i < s.length(); i++){
		if (s[i] == '1') n++; 
	}
	s += (n%2 == 0)? '0' : '1';
	cout << s << '\n';
	return 0;
}
/*
input:-
-----------


output:-
-----------


Problem: 
*/
