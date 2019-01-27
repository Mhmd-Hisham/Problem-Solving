#include <bits/stdc++.h>
/*
Problem: A. Brain's Photos
Link   : https://codeforces.com/contest/707/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N = 0, M = 0;
char pixel;
bool colored = false;

int main () {
	cin >> N >> M;

    while (N--){
        for (int i = 0; i < M; i++){
            cin >> pixel;
            if (not(pixel == 'W' || pixel == 'B' || pixel == 'G')) colored = true;
        }
    }

    cout << ((colored)? "#Color" : "#Black&White" ) << '\n';
	return 0;
}
/*
input:-
-----------
3 2
W W
W W
B B

output:-
-----------
#Black&White

Resources:-
-------------

*/
