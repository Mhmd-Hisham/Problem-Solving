#include <bits/stdc++.h>
/*
Problem: A. Keyboard
Link   : https://codeforces.com/contest/474/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

char shift;
string word;

string keyboard    = "qwertyuiopasdfghjkl;zxcvbnm,./";
string right_shift = "pqwertyuio;asdfghjkl/zxcvbnm,.";
string left_shift  = "wertyuiopqsdfghjkl;axcvbnm,./z";

int main () {
	cin >> shift >> word;
    
    string mapper = (shift == 'R')? right_shift : left_shift;

    for (int i = 0; i < word.length(); i++){
        word[i] = mapper[keyboard.find(word[i])];
    }

	cout << word << '\n';
	return 0;
}


/*
input:-
-----------
R
s;;upimrrfod;pbr

output:-
-----------
allyouneedislove

Resources:-
-------------

*/
