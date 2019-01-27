#include <bits/stdc++.h>

using namespace std;

int password = 0;

int main () {
	cin >> password;
	
	while ( password != 2002 ){
		cout << "Senha Invalida\n";
		cin >> password;
	}
	cout << "Acesso Permitido\n";
	
	return 0;
}
/*
input:-
-----------
2200
1020
2022
2002


output:-
-----------


Problem: 
*/
