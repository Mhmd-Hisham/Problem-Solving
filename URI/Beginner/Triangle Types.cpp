#include <bits/stdc++.h>

using namespace std;

int main () {
	double A = 0, B = 0, C = 0;
	cin >> A >> B >> C;
	
	double S[3] = {A, B, C};
	sort(S,S+3);
	
	string message = "";
	
	A = S[2];
	B = S[1];
	C = S[0];
	
	double AA = A*A, BB = B*B, CC = C*C;
	
	if (A >= C + B)
		message = "NAO FORMA TRIANGULO";
	
	else if ( AA == (BB + CC) )
		message = "TRIANGULO RETANGULO";
	
	else if ( AA > (BB + CC) )
		message = "TRIANGULO OBTUSANGULO";
	
	else if ( AA < (BB + CC) )
		message = "TRIANGULO ACUTANGULO";
	
	if ((A == B) && (B == C))
		message += "\nTRIANGULO EQUILATERO";
	
	else if ( ((A == B)&&(C != A)) or ((B == C)&&(A != B)) or ((A == C)&&(B != A)) )
		message += "\nTRIANGULO ISOSCELES";

	cout << message << "\n";

	return 0;
}
/*
input:-
-----------


output:-
-----------




Problem: 
*/
