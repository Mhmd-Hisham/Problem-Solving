#include <bits/stdc++.h>

using namespace std;

int T = 0;
string m, r, a;
map<string,char> chars_table;

int main () {
	cin >> T;
	chars_table["=.==="] = 'a';
	chars_table["===.=.=.="] = 'b';
	chars_table["===.=.===.="] = 'c';
	chars_table["===.=.="] = 'd';
	chars_table["="] = 'e';
	chars_table["=.=.===.="] = 'f';
	chars_table["===.===.="] = 'g';
	chars_table["=.=.=.="] = 'h';
	chars_table["=.="] = 'i';
	chars_table["=.===.===.==="] = 'j';
	chars_table["===.=.==="] = 'k';
	chars_table["=.===.=.="] = 'l';
	chars_table["===.==="] = 'm';
	chars_table["===.="] = 'n';
	chars_table["===.===.==="] = 'o';
	chars_table["=.===.===.="] = 'p';
	chars_table["===.===.=.==="] = 'q';
	chars_table["=.===.="] = 'r';
	chars_table["=.=.="] = 's';
	chars_table["==="] = 't';
	chars_table["=.=.==="] = 'u';
	chars_table["=.=.=.==="] = 'v';
	chars_table["=.===.==="] = 'w';
	chars_table["===.=.=.==="] = 'x';
	chars_table["===.=.===.==="] = 'y';
	chars_table["===.===.=.="] = 'z';
	while ( T-- ){
		cin >> m; r = "", a = "";
		int ll = 0, lw = 0;
		
		ll = m.find("...",0);
		while (ll != string::npos ){
			a = m.substr(lw, ll);
			lw += (a.length()-1);
			r += chars_table.find(a)->second;
			ll = m.find("...", lw+3);
		}
		if (lw < m.length()) r+= chars_table.find(m.substr(lw, m.length()-1))->second;
		

		cout << r << '\n';
	}

	
	return 0;
}
/*
input:-
-----------
2
===.===.=...===.===.=
=.=.=...===.===.===...=.=.=

=.===
===.=.=.=
===.=.===.=
===.=.=
=
=.=.===.=
===.===.=
=.=.=.=
=.=
=.===.===.===
===.=.===
=.===.=.=
===.===
===.=
===.===.===
=.===.===.=
===.===.=.===
=.===.=
=.=.=
===
=.=.===
=.=.=.===
=.===.===
===.=.=.===
===.=.===.===
===.===.=.=


output:-
-----------


Problem: 
*/
