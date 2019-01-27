#include <bits/stdc++.h>
/*
Problem: 11988 - Broken Keyboard (a.k.a. Beiju Text)
Link   : https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=3139

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

string text;
deque<char> beiju_text;
deque<char> ::iterator it = beiju_text.begin();

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	while ( cin >> text && !cin.eof() ){
        it = beiju_text.begin();
        
        for (int i = 0; i < text.size(); i++){
            if (text[i] == '[') {it = beiju_text.begin(); continue;}
            else if (text[i] == ']') {it = beiju_text.end(); continue;}
        
            it = beiju_text.emplace(it, text[i]);
            it = (it == beiju_text.end())? it : it+1;
        }
        
        it = beiju_text.begin();
        while (it != beiju_text.end()){
            cout << *it++;
        }
        
        cout << '\n';
        beiju_text.clear();
	}
    
	return 0;
}

/*
input:-
-----------
This_is_a_[Beiju]_text
[[]][][]Happy_Birthday_to_Tsinghua_University

output:-
-----------
BeijuThis_is_a__text
Happy_Birthday_to_Tsinghua_University

Resources:-
-------------
http://www.cplusplus.com/reference/deque/deque/emplace/
http://www.cplusplus.com/reference/deque/deque/
https://www.geeksforgeeks.org/deque-cpp-stl/
*/
