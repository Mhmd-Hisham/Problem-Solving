#include <bits/stdc++.h>

using namespace std;

int m;
string s;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	while ( cin >> s && !cin.eof() ){
		m = 0;
		for (int i = 0; i < s.length(); i++)
			m = max(m,int(s[i]));
		
		//(65, 90) A-Z
		//(97, 122) a-z
		if ( m > 64 ){
			if (m < 91) {cout << 10+m-64 << '\n';}
			else cout << 36+m-96 << '\n';
		}
		else cout << max( m-47, 2) << '\n';
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
