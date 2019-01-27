#include <bits/stdc++.h>
/*
Problem: A. String Task
Link   : https://codeforces.com/contest/118/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

string word, output = "";
string vowel = "aoyeui";

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> word;
	
	for (int i = 0; i < word.length(); i++){
		word[i] = tolower(word[i]);

		if (vowel.find(word[i]) == string::npos){ 
		    output += '.';
		    output += word[i];
        }
	}

	cout << output << '\n';
	return 0;
}
/*
input:-
-----------
Codeforces

output:-
-----------
.c.d.f.r.c.s

Resources:-
-------------
http://www.cplusplus.com/reference/string/string/find/
https://www.geeksforgeeks.org/string-find-in-cpp/
https://stackoverflow.com/questions/2340281/check-if-a-string-contains-a-string-in-c

*/
