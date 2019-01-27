#include <bits/stdc++.h>
/*
Problem: 
Link   : https://codeforces.com/contest/71/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N = 0, len = 0;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;

    string word, encoded[N];

	for (int i = 0; i < N; i++){
		cin >> word;
		len = word.length();
		if (len > 10) encoded[i] = word[0] + to_string(len-2) + word[len-1];
		else encoded[i] = word;
	}

	for (int i = 0; i < N; i++){
    	cout << encoded[i] << '\n';

	}
	return 0;
}
/*
input:-
-----------
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis

output:-
-----------
word
l10n
i18n
p43s

Resources:-
-------------

*/
