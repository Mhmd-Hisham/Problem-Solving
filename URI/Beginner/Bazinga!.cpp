#include <bits/stdc++.h>

using namespace std;

int T = 0, i = 1;
int N = 0;
string a, b;

int main () {
	cin >> T;
	
	while ( T-- ){
		cout << "Caso #" << i << ": ";
		N = 0;
		cin >> a >> b;
		if ( a == "pedra" ) {
			if ( b == "lagarto" || b == "tesoura" ) N = 1;
			else if ( b == "papel" || b == "Spock") N = 2;
		}
		else if ( a == "papel" ){
			if ( b == "pedra" || b == "Spock" ) N = 1;
			else if ( b == "tesoura" || b == "lagarto") N = 2;

		}
		else if ( a == "tesoura" ){
			if ( b == "papel" || b == "lagarto" ) N = 1;
			else if ( b == "Spock" || b == "pedra") N = 2;
		}
		else if ( a == "lagarto" ){
			if ( b == "Spock" || b == "papel" ) N = 1;
			else if ( b == "pedra" || b == "tesoura") N = 2;
		}
		else if ( a == "Spock" ){
			if ( b == "tesoura" || b == "pedra" ) N = 1;
			else if ( b == "papel" || b == "lagarto") N = 2;
		}
		cout << ((N == 1)? "Bazinga!" : (N == 2)? "Raj trapaceou!" : "De novo!") << '\n';
		i++;
	}

	return 0;
}
/*
pedra, papel, tesoura, lagarto, Spock 
rock, paper, scissors, lizard, Spock)

rock     --->> lizard, scissors;
paper    --->> rock, spock
scissors --->> paper, lizard;
lizard   --->> spock, paper;
spock    --->> scissors, rock

*/
/*
input:-
-----------
3
papel pedra
lagarto tesoura
Spock Spock 


5
pedra pedra
papel papel
tesoura tesoura
lagarto lagarto
Spock Spock

10
pedra papel
pedra Spock
papel tesoura
papel lagarto
tesoura pedra
tesoura Spock
lagarto pedra
lagarto tesoura
Spock papel
Spock lagarto

10
pedra tesoura
pedra lagarto
papel pedra
papel Spock
tesoura papel
tesoura lagarto
lagarto papel
lagarto Spock
Spock pedra
Spock tesoura

25
papel pedra
papel Spock
papel lagarto
papel tesoura
papel papel
tesoura papel
tesoura lagarto
tesoura pedra
tesoura Spock
tesoura tesoura
pedra tesoura
pedra lagarto
pedra papel
pedra Spock
pedra pedra
lagarto papel
lagarto Spock
lagarto pedra
lagarto tesoura
lagarto lagarto
Spock pedra
Spock tesoura
Spock papel
Spock lagarto
Spock Spock

output:-
-----------


Problem: 
*/
