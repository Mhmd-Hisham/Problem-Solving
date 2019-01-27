#include <bits/stdc++.h>

using namespace std;

int N = 0;
string p1, p2, winner;

int main () {
	cin >> N;
	
	for (int i = 0;i < N; i++){
		cin >> p1 >> p2;
		if (p1 == "ataque"){
			if (p2 == "ataque") winner = "Aniquilacao mutua";
			else if (p2 == "pedra") winner = "Jogador 1 venceu";
			else if (p2 == "papel") winner = "Jogador 1 venceu";
		}
		
		else if (p1 == "pedra"){
			if (p2 == "ataque") winner = "Jogador 2 venceu";
			else if (p2 == "pedra") winner = "Sem ganhador";
			else if (p2 == "papel") winner = "Jogador 1 venceu";
		}
		
		else if (p1 == "papel"){
			if (p2 == "ataque") winner = "Jogador 2 venceu";
			else if (p2 == "pedra") winner = "Jogador 2 venceu";
			else if (p2 == "papel") winner = "Ambos venceram";
		}

		cout << winner << "\n";
	}

	return 0;
}

/*
---------------------------------------------------------------------

    “Jogador 1 venceu”: if Player 1 has won the game
    “Jogador 2 venceu”: if Player 2 has won the game


---------------------------------------------------------------------
    Rock,Airstrike: Airstrike
    Rock, Rock: no winner
    Airstrike, Airstrike: lose lose
  
    Paper, Airstrike: Airstrike
    Paper, Rock: Rock
    Paper, Paper: win, win
    
---------------------------------------------------------------------

    “ataque”: to represents Airstrike
    “pedra”: to represents Rock
    “papel”: to represents Paper

---------------------------------------------------------------------

*/

/*
input:-
-----------


output:-
-----------


Problem: 
*/


