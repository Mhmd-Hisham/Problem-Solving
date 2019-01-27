#include <bits/stdc++.h>
/*
Problem: A. Pangram
Link   : https://codeforces.com/contest/520/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int idx = 0, len = 0;
string word;
string ascii_lowercase = "abcdefghijklmnopqrstuvwxyz";

string lower(string word);

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> len >> word;

    word = lower(word);
    if (len >= 26){
        sort(word.begin(), word.end());
	    for (int i = 0; i < len; i++){
	        if (word[i] == ascii_lowercase[idx]) idx++;
	    }
    
    }

	printf((idx > 25)? "YES" : "NO" );
	return 0;
}

string lower(string word){
    string output = "";

	for (int i = 0; i < word.size(); i++){
        output += tolower(word[i]);
	}
    
    return output;
}

/*
input:-
-----------
12
toosmallword

output:-
-----------
NO

Resources:-
-------------

*/
