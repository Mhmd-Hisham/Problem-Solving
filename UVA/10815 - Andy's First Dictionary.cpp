#include <bits/stdc++.h>
/*
Problem: 10815 - Andy's First Dictionary
Link   : https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1756

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

string word, line;
set<string> dictionary;
set<string>::iterator it;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	while ( getline(cin, line) && !cin.eof() ){

	    word = "";
	    
	    for (int i = 0; i < line.length(); i++){
	        if ( ispunct(line[i]) || isspace(line[i]) || isdigit(line[i]) ) {
	            if (word != "") dictionary.insert(word);
	            word = "";
	            continue;
	        }

	        word += tolower(line[i]);
	    }

	    if (word != "") dictionary.insert(word);
    }

    it = dictionary.begin();
    while (it != dictionary.end()){
        cout << *it << '\n';
        it++;
    }

	return 0;
}
/*
input:-
-----------
Adventures in Disneyland
Two blondes were going to Disneyland when they came to a fork in the
road. The sign read: "Disneyland Left."
So they went home.

output:-
-----------
a
adventures
blondes
came
disneyland
fork
going
home
in
left
read
road
sign
so
the
they
to
two
went
were
when

Resources:-
-------------
http://www.cplusplus.com/reference/set/set/
https://www.geeksforgeeks.org/set-in-cpp-stl/
http://www.cplusplus.com/reference/cctype/ispunct/
http://www.cplusplus.com/reference/cctype/isspace/
http://www.cplusplus.com/reference/cctype/isalnum/
*/
