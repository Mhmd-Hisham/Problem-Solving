#include <bits/stdc++.h>
/*
Problem: 414 - Machined Surfaces
Link   : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=355

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

string line;
int xcount[14];
int spaces = 0, max_x_count = 0, N = 0;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	while ( cin >> N && !cin.eof() && N != 0 ){
        cin.ignore();

	    spaces = 0;
	    max_x_count = 0;
		for (int i = 0; i < N; i++){
            xcount[i] = 0;
		    getline(cin, line);

		    for (int j = 0; j < 25; j++){
		        if (line[j] == 'X') xcount[i]++; 
		    }

		    max_x_count = max(max_x_count, xcount[i]);
		}

		for (int i = 0; i < N; i++){
		    spaces += (max_x_count-xcount[i]);
		}
		
		cout << spaces << '\n';
		
	}

	return 0;
}
/*
input:-
-----------
4
XXXX                XXXXX
XXX               XXXXXXX
XXXXX                XXXX
XX                 XXXXXX
2
XXXXXXXXXXXXXXXXXXXXXXXXX
XXXXXXXXXXXXXXXXXXXXXXXXX
1
XXXXXXXXX              XX
0

output:-
-----------
4
0
0


Resources:-
-------------
https://stackoverflow.com/questions/18786575/using-getline-in-c
https://stackoverflow.com/questions/20970780/getline-cin-ignore-in-c
https://www.geeksforgeeks.org/getline-string-c/

Code on ideone.com: https://ideone.com/VV06BD
*/
