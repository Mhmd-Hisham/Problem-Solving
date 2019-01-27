#include <bits/stdc++.h>

using namespace std;

int C, N;
string A, B, R;

char reverse_case(char a){
	if (isupper(a))
		return tolower(a);
	else return toupper(a);
}

char Replace(char s, char x, char y){
	char r = s;
	if (s == x) r = y;
	else if (s == y) r = x;
	
	return r;
}

int main () {
	
	while ( cin >> C >> N && !cin.eof() ){
		getchar();
		getline(cin,A);
		getline(cin,B);
		for (int i = 0; i < N; i++){
			getline(cin,R,'\n');

			for (int j = 0; j < C; j++){
				for (int k = 0; k < R.length(); k++)
					R[k] = Replace(R[k], A[j], B[j]);
			}
			for (int k = 0; k < R.length(); k++)
				printf("%c",((!isalpha(R[k]))? tolower(R[k]) : R[k]));
			cout << '\n';
		}
		cout << '\n';
	}

	return 0;
}
/*

5 1 ZENIT POLAR Osro roxre osri caftide

input:-
-----------
5 1
ZENIT
POLAR
Osro roxre osri caftide

Osri o umi roclaci do ctazregtifai zet subsraruacie
Zedo sot ficanmolro quobtide i zitrat do umi bei imesrti do roxre
3 2
UMA
123
C3d3 12 por si
123 3 123

output:-
-----------
Este texto esta cifrado
Esta e uma tecnica de criptografia por substituicao
Pode ser facilmente quebrado a partir de uma boa amostra de texto

Cada um por si
uma a uma
 

Problem: 
*/
