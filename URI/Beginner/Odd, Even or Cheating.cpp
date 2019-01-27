#include <bits/stdc++.h>

using namespace std;

int winner = 0, p, J1, J2, r, a, ore = 0;

int main () {
	cin >> p >> J1 >> J2 >> r >> a;
	
	ore = ((J1+J2)%2 == 0);
	winner = (r == 1)? ((a == 1)? 2 : 1) : 0;
	winner = (!winner)? ((p == 1)? (ore? 1 : 2) : (ore? 2 : 1)) : winner;
	
	printf("Jogador %d ganha!\n", winner);
	return 0;
}
/*
input:-
-----------
1 4 5 1 11 4 5 1 1

5+4 = even! player1
1 == 1: player1 is cheating.. player2 wins!



output:-
-----------


Problem: 
*/
