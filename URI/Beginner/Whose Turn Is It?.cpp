#include <bits/stdc++.h>

using namespace std;

int T = 0;
int A = 0, B = 0;
bool winner;
string names[2];
string choices[2];

int main () {
	cin >> T;
	
	while ( T-- ){
		cin >> names[0] >> choices[0] >> names[1] >> choices[1];
		cin >> A >> B;
		winner = (choices[0] == "PAR")? 0 : 1;
		cout << (((A+B)%2 == 0)? names[winner] : names[!winner]) << endl;
		
	}

	return 0;
}
/*
input:-
-----------
4
Quico PAR Chiquinha IMPAR
9 7
Dami PAR Marcus IMPAR
12 3
Dayran PAR Conrado IMPAR
3 1000000000
Popis PAR Chaves IMPAR
2 7


output:-
-----------


Problem: 
*/
