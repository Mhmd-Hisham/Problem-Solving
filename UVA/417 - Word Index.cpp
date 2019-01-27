#include <bits/stdc++.h>
/*
Problem: 417 - Word Index
Link   : https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=358

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

#define endl '\n'

using namespace std;

string word, ordered_word;
string lowercase = "abcdefghijklmnopqrstuvwxyz";

map<string, int> ordered_dict, M;
map<string, int> ::iterator it;

void init_map();

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

    init_map();// generate all the possible words and store each order
	while ( cin >> word && !cin.eof() ){
		ordered_word = word;
		
		it = ordered_dict.find(word);

		if ( it == ordered_dict.end() ) cout << 0 << endl;// if we can't find the word in the dictionary.. then it is wrong formatted
		else cout << it->second << endl;

	}

	return 0;
}

void init_map(){
    // initialize the main dictionary which contains all possible words and their order
    // The function can also be written as five for loops.. think about it.. we are Brute-forcing anyway :"D
    queue<string> left;
    string word = "";

    int count = 1, idx = 1;
    // we push 'ab..z' first to the queue
    for (int i = 0; i < 26; i++){
        left.push(string(1, lowercase[i]));
    }
    
    // we pushed 'a..z'..Now once we get to b.. we need to push 'bc..z', and so on..
    // The idea of the queue is to organize the words as we go
    while (!left.empty()){
        if (word.length() > 5) break;
        word = left.front(); left.pop();
        
        ordered_dict[word] = count; count++;
        
        idx = word[word.length()-1]-'a';
        for (int i = idx+1; i < 26; i++)
            left.push(word+lowercase[i]);
    }
}

/*
Sample input:-
-----------------
z
a
cat
vwxyz

Sample output:-
-----------------
26
1
0
83681

Resources:-
-------------
http://www.cplusplus.com/reference/map/map/
http://www.cplusplus.com/reference/queue/queue/
https://stackoverflow.com/questions/17201590/c-convert-from-1-char-to-string

*/
