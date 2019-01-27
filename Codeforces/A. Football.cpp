#include <bits/stdc++.h>
/*
Problem: A. Football
Link   : https://codeforces.com/contest/43/problem/A

Solution by: Mohamed Hisham El-Banna

Gmail   : Mohamed00Hisham@Gmail.com
Github  : www.github.com/Mhmd-Hisham
LinkedIn: www.linkedin.com/in/Mhmd-Hisham
*/

using namespace std;

int N, score1 = 0, score2 = 0;
string team1, team2, team;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
    
    cin >> team1;
    score1++;
    N--;
    
	while ( N-- ){
	    cin >> team;
	    if (team == team1) score1++;
	    else {score2++; team2 = team;}
	}
    
    cout << ((score1 >= score2)? team1 : team2 ) << '\n';
	return 0;
}
/*
input:-
-----------
5
A
ABA
ABA
A
A

output:-
-----------
1

Resources:-
-------------

*/
