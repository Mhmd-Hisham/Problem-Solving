#include <bits/stdc++.h>
/*
Problem: A. Word
Link   : https://codeforces.com/contest/59/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int lower = 0, upper = 0;
string word = "", output = "";

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> word;
	
	for (int i = 0; i < word.size(); i++){
		if (islower(word[i])) lower++;
		else upper++;
	}
	
	if (lower >= upper){// convert to lower
	    for (int i = 0; i < word.size(); i++){
            output += tolower(word[i]);
	    }
	}
    else { // convert to upper
	    for (int i = 0; i < word.size(); i++){
            output += toupper(word[i]);
	    }
    }

	cout << output << '\n';
	return 0;
}
/*
input:-
-----------
maTRIx

output:-
-----------
matrix
*/
